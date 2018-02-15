from os.path import join, realpath, dirname

REPO = realpath(join(dirname(__file__), '..', '..'))
BUILD = join(REPO, '_build')

PROTOC_DIR = join(REPO, 'tools', 'protoc-3.5.1-osx-x86_64')
PROTO_DIR = join(REPO, 'proto')