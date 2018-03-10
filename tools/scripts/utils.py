from shutil import rmtree
from os import remove, walk, path, mkdir

def make_dir(d):
    try:
        mkdir(d)
    except:
        pass


def recreate_dir(directory):
    try:
        rmtree(directory)
    except:
        pass

    make_dir(directory)


def cleanup_dir(directory, cleanupExt):
    for root, dirs, files in walk(directory):
        for f in files:
            if any([f.endswith(ext) for ext in cleanupExt]):
                remove(path.join(root, f))
