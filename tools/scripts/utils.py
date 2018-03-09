from shutil import rmtree
from os import remove, walk, path

def mkdir(d):
    try:
        mkdir(d)
    except:
        pass


def recreate_dir(directory):
    try:
        rmtree(directory)
    except:
        pass

    mkdir(directory)


def cleanup_dir(directory, cleanupExt):
    for root, dirs, files in walk(directory):
        for f in files:
            if any([f.endswith(ext) for ext in cleanupExt]):
                remove(path.join(root, f))
