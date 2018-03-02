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


def main():
    generate_proto.main()

    _recreate(BUILD)

    # python
    venv = join(BUILD, 'PYTHON_ENV')
    call(['virtualenv', venv])
    call(['pip', 'install', '-r', join(REPO, 'src', 'py', 'requirements.txt')])

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

if __name__ == '__main__':
    main()