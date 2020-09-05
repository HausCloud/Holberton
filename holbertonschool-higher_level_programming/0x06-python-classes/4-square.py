#!/usr/bin/python3
class Square:
    def __init__(self, size=0):
        self._Square_size = size
        if type(size) is not (int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

    @property
    def size(self):
        return self._Square_size

    @size.setter
    def size(self, value):
        if type(value) is (int):
            self._Square_size = value
        else:
            raise TypeError("size must be an integer")

    def area(self):
        return ((self._Square_size) * (self._Square_size))
