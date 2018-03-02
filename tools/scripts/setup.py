from os import mkdir, chdir, getcwd
from os.path import join
from subprocess import call
from shutil import rmtree

from env import BUILD, REPO, GENERATOR
import generate_proto


def _recreate(d):
    try:
        rmtree(d)
    except:
        pass

    _mkdir(d)


def _mkdir(d):
    try:
        mkdir(d)
    except:
        pass

def gen_python():
    # python
    venv = join(BUILD, 'PYTHON_ENV')
    call(['virtualenv', venv])
    call(['pip', 'install', '-r', join(REPO, 'src', 'py', 'requirements.txt')])


def gen_cpp():
    # cpp
    cwd = getcwd()
    try:
        src = join(REPO, 'src', 'cpp')

        build_ = join(REPO, '_build', 'cpp')
        _recreate(build_)
        chdir(build_)

        call(['cmake', '-G', GENERATOR, src])
    finally:
        chdir(cwd)


def main():
    generate_proto.main()
    _recreate(BUILD)

    for g in [gen_python, gen_cpp]:
        g()

if __name__ == '__main__':
    main()