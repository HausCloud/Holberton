#!/usr/bin/python3
class Square:
    def __init__(self, size=0, position=(0, 0)):
        self._Square_size = size
        self._Square_position = position
        if type(size) is not (int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
        if type(position) is not (tuple):
            raise TypeError("position must be a tuple of 2 positive integers")
        if position[0] < 0 or position[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")

    @property
    def size(self):
        return self._Square_size

    @size.setter
    def size(self, value):
        if type(value) is int:
            self._Square_size = value
        else:
            raise TypeError("size must be an integer")

    @property
    def position(self):
        return self._Square_position

    @position.setter
    def position(self, value):
        if type(position) is (tuple):
            self._Square_position = value
        else:
            raise TypeError("position must be a tuple of 2 positive integers")

    def area(self):
        return ((self._Square_size) * (self._Square_size))

    def my_print(self):
        if self._Square_size == 0:
            print()
        else:
            for i in range(0, self._Square_position[1]):
                if self._Square_position[1] > 0:
                    print()
            for i in range(0, self._Square_size):
                for i in range(0, self._Square_position[0]):
                    print(" ", end="")
                for i in range(0, self._Square_size):
                    print("#", end="")
                print()
