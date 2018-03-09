from sys import platform
from os.path import join, realpath, dirname

REPO = realpath(join(dirname(__file__), '..', '..'))
BUILD = join(REPO, '_build')

print(platform)
if platform == 'win32':
    PROTOC_DIR = join(REPO, 'tools', 'protoc-3.5.1-win32')
    GENERATOR = 'Visual Studio 15 2017'
else:
    PROTOC_DIR = join(REPO, 'tools', 'protoc-3.5.1-osx-x86_64')
    GENERATOR = 'Xcode'

PROTO_DIR = join(REPO, 'proto')


__all__ = [
    'REPO',
    'BUILD',
    'PROTO_DIR',
    'PROTOC_DIR',
]