#!/usr/bin/python3
""" This is a module. It contains .. a class. That it is. """


from models.base import Base
import json


class Rectangle(Base):
    """ a Rectangle class that inherits from the Base class.

    Args:
        width: width of rectangle param.
        height: height of rectangle param.
        x: x param.
        y: y param.
        id: id param.
    """
    def __init__(self, width, height, x=0, y=0, id=None):
        """ Instance/object instantiation.

        Args:
            width: width of rectangle.
            height: height of rectangle.
            x: literally don't even know.
            y: above.
            id: identity of object
        """
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)

    @property
    def width(self):
        """ getter for width.
        """
        return self.__width

    @width.setter
    def width(self, value):
        """ setter for width.

        Args:
            value: value to be set
        """
        if type(value) is not (int):
            raise TypeError("width must be an integer")
        if value <= 0:
            raise ValueError("width must be > 0")
        self.__width = value

    @property
    def height(self):
        """ getter for height.
        """
        return self.__height

    @height.setter
    def height(self, value):
        """ setter for width.

        Args:
            value: value to be set.
        """
        if type(value) is not (int):
            raise TypeError("height must be an integer")
        if value <= 0:
            raise ValueError("height must be > 0")
        self.__height = value

    @property
    def x(self):
        """ getter for x.
        """
        return self.__x

    @x.setter
    def x(self, value):
        """ setter for x.

        Args:
            value: value to be set.
        """
        if type(value) is not (int):
            raise TypeError("x must be an integer")
        if value < 0:
            raise ValueError("x must be >= 0")
        self.__x = value

    @property
    def y(self):
        """ getter for y.
        """
        return self.__y

    @y.setter
    def y(self, value):
        """ setter for y.

        Args:
            value: value to be set.
        """
        if type(value) is not (int):
            raise TypeError("y must be an integer")
        if value < 0:
            raise ValueError("y must be >= 0")
        self.__y = value

    def __str__(self):
        """ Overload __str__ method for this class.

        Returns:
            A str containing class attributes.
        """
        return "[{}] ({}) {}/{} - {}/{}".format(
            self.__class__.__name__, self.id,
            self.__x, self.__y, self.__width, self.__height)

    def area(self):
        """ Method that calculates area of a rectangle.

        Returns:
            the area of the rectangle.
        """
        return self.__width * self.__height

    def display(self):
        """ Prints newlines, spaces, and hashes to stdout.
        """
        for i in range(0, self.__y):
            print()
        for i in range(0, self.__height):
            for i in range(0, self.__x):
                print(' ', end='')
            for i in range(0, self.__width):
                print('#', end='')
            print()

    def to_dictionary(self):
        """ Returns dictionary representation of a Rectangle.

        Returns:
            dict_rep.
        """
        dict_rep = {'id': self.id, 'width': self.__width, 'height':
                    self.__height, 'x': self.__x, 'y': self.__y}
        return dict_rep

    def update(self, *args, **kwargs):
        """ Method that assigns attributes from variable arguments.

        Args:
            args: variable arguments.
            kwargs: keyworded variable arguments.
        """
        x = 0
        for argument in args:
            x += 1
            if x == 1:
                self.id = argument
            if x == 2:
                self.__width = argument
            if x == 3:
                self.__height = argument
            if x == 4:
                self.__x = argument
            if x == 5:
                self.__y = argument
        if x == 0:
            for k, v in kwargs.items():
                if k == "id":
                    self.id = v
                if k == "width":
                    self.__width = v
                if k == "height":
                    self.__height = v
                if k == "x":
                    self.__x = v
                if k == "y":
                    self.__y = v
