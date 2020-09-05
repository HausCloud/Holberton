#!/usr/bin/python3
""" This is a module. It contains .. a class. That is it."""


import json


class Base:
    """ the Base class

    Args:
        id: identity of class

    Attributes:
        __nb_objects: number of class objects created from Base
    """
    __nb_objects = 0

    def __init__(self, id=None):
        """ Instance/object instantiation.

        Args:
            id: object identity number
        """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """ Static class method that returns JSON string representation of
        parameter list_dictionaries.

        Args:
            list_dictionaries: a list of dictionaries.

        Returns:
            If list_dictionaries is None, a string "[]". Otherwise, JSON string
            representation of an object.
        """
        if list_dictionaries is None:
            return "[]"
        return json.dumps(list_dictionaries)

    @staticmethod
    def from_json_string(json_string):
        """ Static class method that returns an object from a JSON string.
        In this case, a list of dictionaries from json_string.

        Args:
            json_string: a JSON string.

        Returns:
            If json_string is None, an empty list. Otherwise, object.
            representation of a string.
            json_string: JSON string.
        """
        if json_string is None:
            return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """ Class method that returns an instance/object with attributes set.

        Args:
            cls: Class attached to method call.
            dictionary: Dictionary from to_dictionary method.

        Returns:
            Instance/object with attributes (not dummy ones).
        """
        if cls.__name__ == "Rectangle":
            r1 = cls(1, 1)
            r1.update(**dictionary)
            return r1
        elif cls.__name__ == "Square":
            s1 = cls(1, 1)
            s1.update(**dictionary)
            return s1

    @classmethod
    def load_from_file(cls):
        """ Class method that loads a json string from file and return an
        object. In this case, the object is a list of instances/objects.

        Args:
            cls: Class attached to method call.

        Returns:
            list of instances/objects.
        """
        try:
            if cls.__name__ == "Rectangle":
                with open("{}.json".format(cls.__name__), "r") as my_file:
                    x = my_file.read()
            if cls.__name__ == "Square":
                with open("{}.json".format(cls.__name__), "r") as my_file:
                    x = my_file.read()
        except FileNotFoundError as oops:
            return []
        some_list = []
        new_list = cls.from_json_string(x)
        for dictIndex in range(0, len(new_list)):
            some_list.append(cls.create(**new_list[dictIndex]))
        return some_list

    @classmethod
    def save_to_file(cls, list_objs):
        """ Class method that turns a list of objects into a JSON string and
        saves it into a file.

        Args:
            cls: Class attached to method call.
            list_objs: A list of objects.
        """
        if list_objs is None:
            some_list = []
        elif cls.__name__ == "Rectangle":
            some_list = []
            for idx in range(0, len(list_objs)):
                some_list.append(list_objs[idx].to_dictionary())
        elif cls.__name__ == "Square":
            some_list = []
            for idx in range(0, len(list_objs)):
                some_list.append(list_objs[idx].to_dictionary())
        with open("{}.json".format(cls.__name__), "w") as my_file:
            my_file.write(cls.to_json_string(some_list))
