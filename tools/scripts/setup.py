from os import mkdir, chdir, getcwd
from os.path import join
from subprocess import run
from shutil import rmtree

from env import BUILD, REPO
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
    run(['virtualenv', venv])
    run(['pip', 'install', '-r', join(REPO, 'src', 'py', 'requirements.txt')])

    # cpp
    cwd = getcwd()
    try:
        src = join(REPO, 'src', 'cpp')

        build_ = join(REPO, '_build', 'cpp')
        _recreate(build_)
        chdir(build_)

        run(['cmake', '-G', 'Xcode', src])
    finally:
        chdir(cwd)

if __name__ == '__main__':
    main()