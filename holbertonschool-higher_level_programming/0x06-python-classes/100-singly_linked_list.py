#!/usr/bin/python3
class Node:
    def __init__(self, data, next_node=None):
        self.__data = data
        self.__next_node = next_node
        if type(data) is not (int):
            raise TypeError("data must be an integer")

    @property
    def data(self):
        return self.__data

    @data.setter
    def data(self, value):
        if type(value) is (int):
            self.__data = value
        else:
            raise TypeError("data must be an integer")

    @property
    def next_node(self):
        return self.__next_node

    @node.setter
    def next_node(self, value):
        if type(value) is (int):
            self.__next_node = value
        else:
            raise TypeError("data must be an integer")

    
