#!/usr/bin/python3
class Square:
    def __init__(self, size=0):
        self._Square_size = size
        if type(size) is not (int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        return ((self._Square_size) * (self._Square_size))
