#!/usr/bin/python3
class Rectangle:

    number_of_instances = 0

    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height
        Rectangle.number_of_instances += 1

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, value):
        if type(value) is not (int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, value):
        if type(value) is not (int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def __str__(self):
        new_string = ""
        for y in range(0, self.__height):
            for x in range(0, self.__width):
                new_string += "#"
            if y != (self.__height - 1):
                new_string += "\n"
        return (new_string)

    def __repr__(self):
        new_string = "Rectangle("
        new_string += str(self.__width)
        new_string += ", "
        new_string += str(self.__height)
        new_string += ")"
        return (new_string)

    def __del__(self):
        print("Bye rectangle...")
        Rectangle.number_of_instances -= 1

    def area(self):
        if self.__width == 0 or self.__height == 0:
            return ("")
        return (self.__height * self.__width)

    def perimeter(self):
        if self.__width == 0 or self.__height == 0:
            return 0
        else:
            return ((self.__height * 2) + (self.__width * 2))
