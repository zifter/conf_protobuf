import os
import subprocess
from os.path import join, relpath, basename, splitext

from env import REPO, PROTOC_DIR, PROTO_DIR


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

def gen_cmake_list(to_process, dest):
    cmake_src = []
    for p in to_process:
        msg_basename = splitext(basename(p[0]))[0]
        path = p[2].replace('\\', '/')
        cmake_src.append('${CMAKE_CURRENT_SOURCE_DIR}' + '/{}/{}.pb.h'.format(path, msg_basename))
        cmake_src.append('${CMAKE_CURRENT_SOURCE_DIR}' + '/{}/{}.pb.cc'.format(path, msg_basename))

    src = '\n    '.join(p for p in cmake_src)
    with open(join(dest, 'proto_sources.cmake'), 'w') as f:
        data = 'SET(PROTO_SOURCES\n    {})'.format(src)
        f.write(data)

    print cmake_src

def main():

    to_process = []
    for root, dirs, files in os.walk(PROTO_DIR):
        for f in files:
            if f.endswith('.proto'):
                to_process.append((join(root, f), [root], relpath(root, PROTO_DIR)))

    exe = get_protoc(PROTOC_DIR)

    DEST = [
    {
        'generator': 'cpp_out',
        'dest': join(REPO, 'src', 'cpp', 'proto'),
        'postprocess': gen_cmake_list,
    },
    {
        'generator': 'python_out',
        'dest': join(REPO, 'src', 'py', 'proto'),
    },
]

    for d in DEST:
        for p in to_process:
            protoc(exe, p[0], p[1], d['generator'], join(d['dest'], p[2]))

        postprocess = d.get('postprocess', None)
        if postprocess is not None:
            postprocess(to_process, d['dest'])


if __name__ == '__main__':
    main()