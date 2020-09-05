#!/usr/bin/python3
""" This is a module. It contains .. a class. That is it. """


from models.rectangle import Rectangle


class Square(Rectangle):
    """ a Square class that inherits from the Rectangle class.

    Args:
        size: apparently can be either height or width.
        x: still don't know.
        y: above.
        id: identity of object.
    """
    def __init__(self, size, x=0, y=0, id=None):
        """ Instance/object instantiation.

        Args:
            size: attribute set from height or width.
            x: some random argment.
            y: another random argument.
            id: identity of object.
        """
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        """ setter for size.
        """
        return self.height

    @size.setter
    def size(self, value):
        """ getter for size
        """
        self.width = value
        self.height = value

    def update(self, *args, **kwargs):
        """ Method that assigns attributes from variable arguments.

        Args:
            args: variable arguments.
            kwargs: keyworded variable arguments
        """
        x = 0
        for argument in args:
            x += 1
            if x == 1:
                self.id = argument
            if x == 2:
                self.size = argument
            if x == 3:
                self.x = argument
            if x == 4:
                self.y = argument
        if x == 0:
            for k, v in kwargs.items():
                if k == "id":
                    self.id = v
                if k == "size":
                    self.size = v
                if k == "x":
                    self.x = v
                if k == "y":
                    self.y = v

    def to_dictionary(self):
        """ Returns dictionary representation of a Rectangle.

        Returns:
            dict_rep.
        """
        dict_rep = {'id': self.id, 'size': self.size, 'x': self.x, 'y': self.y}
        return dict_rep

    def __str__(self):
        """ Overload __str__ method for this class.

        Returns:
            A str containing class attributes.
        """
        return "[{}] ({}) {}/{} - {}".format(self.__class__.__name__, self.id,
                                             self.x, self.y, self.size)
