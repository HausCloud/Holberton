#!/usr/bin/python3
""" Module to print a square """
def print_square(size):
    """ function to print a square """
    if type(size) is not (int):
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
    if size == 0:
        print()
    else:
        for y in range(0, size):
            for x in range(0, size):
                print("#", end="")
            print()
