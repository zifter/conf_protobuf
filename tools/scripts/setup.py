from os import mkdir
from os.path import join
from subprocess import run
from shutil import rmtree

from env import BUILD, REPO
import generate_proto

def main():
    generate_proto.main()

    try:
        rmtree(BUILD)
    except:
        pass

    try:
        mkdir(BUILD)
    except:
        pass

    # python
    venv = join(BUILD, 'PYTHON_ENV')
    run(['virtualenv', venv])
    run(['pip', 'install', '-r', join(REPO, 'src', 'py', 'requirements.txt')])

if __name__ == '__main__':
    main()