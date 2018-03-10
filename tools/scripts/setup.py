from os import chdir, getcwd
from os.path import join
from subprocess import call

from env import BUILD, REPO, GENERATOR
from utils import recreate_dir
import generate_proto


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
        recreate_dir(build_)
        chdir(build_)

        call(['cmake', '-G', GENERATOR, src])
    finally:
        chdir(cwd)


def main():
    generate_proto.main()
    recreate_dir(BUILD)

    for g in [gen_python, gen_cpp]:
        g()

if __name__ == '__main__':
    main()