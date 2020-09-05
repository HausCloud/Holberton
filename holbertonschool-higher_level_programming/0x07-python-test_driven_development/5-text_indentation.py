#!/usr/bin/python3
""" Module to indent text depending on certain characters """
def text_indentation(text):
    """ function to indent stuff """
    if type(text) is not (str):
        raise TypeError("text must be a string")
    x = 0
    for char in text:
        if char is " " and x == 0:
            continue
        if char is not " " and x == 0:
            x = -1
        if char is not "." and char is not "?" and char is not ":":
            print(char, end="")
        else:
            print(char, end="")
            print()
            print()
            x = 0
