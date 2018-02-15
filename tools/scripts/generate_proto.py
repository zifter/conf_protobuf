import os
import subprocess

from os.path import join, relpath

from env import REPO, PROTOC_DIR, PROTO_DIR

DEST = [
    {
        'generator': 'cpp_out',
        'dest': join(REPO, 'src', 'cpp', 'proto'),
    },
    {
        'generator': 'python_out',
        'dest': join(REPO, 'src', 'py', 'proto'),
    },
]


def get_protoc(protoc_dir):
    return join(protoc_dir, 'bin', 'protoc')

def run(cmd):
    print(' '.join(cmd))
    return subprocess.call(cmd)

def protoc(exe, protofile, protopathes, generator, output):
    cmd = [
        exe,

        '--{}={}'.format(generator, output),
    ]

    cmd.extend(['--proto_path={}'.format(p) for p in protopathes])
    cmd.append(protofile)

    try:
        os.mkdir(output)
    except:
        pass

    if run(cmd) == 0:
        print('OK')
    else:
        print('FAILED')


def main():

    to_process = []
    for root, dirs, files in os.walk(PROTO_DIR):
        for f in files:
            if f.endswith('.proto'):
                to_process.append((join(root, f), [root], relpath(root, PROTO_DIR)))

    exe = get_protoc(PROTOC_DIR)
    for d in DEST:
        for p in to_process:
            protoc(exe, p[0], p[1], d['generator'], join(d['dest'], p[2]))


if __name__ == '__main__':
    main()