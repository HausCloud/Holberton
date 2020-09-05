#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        number *= -1
    var = (number % 10)
    print(var, end="")
    return var
