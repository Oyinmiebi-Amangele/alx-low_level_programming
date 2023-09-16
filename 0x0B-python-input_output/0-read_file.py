#!/usr/bin/python3
"""Function that reads a test file"""


def read_file(filename=""):
    with open(filename, 'r') as files:
        read_file = files.read()

    print(read_file)
