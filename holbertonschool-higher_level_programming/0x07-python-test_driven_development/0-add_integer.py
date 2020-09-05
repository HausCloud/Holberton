#/usr/bin/python3
"""
This is a docstring.
File containing module / function add_integer
Cheese.
"""
def add_integer(a, b=98):
    """
    Add and return two integer
    """
    if type(a) is not (int) and type(a) is not (float):
        raise TypeError("a must be an integer")
    if type(b) is not (int) and type(b) is not (float):
        raise TypeError("b must be an integer")
    if type(a) is (float):
        a = int(a)
    if type(b) is (float):
        b = int(b)
    return a + b
