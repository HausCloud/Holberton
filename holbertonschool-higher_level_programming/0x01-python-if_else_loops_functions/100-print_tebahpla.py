#!/usr/bin/python3
alphabet = "zyxwvutsrqponmlkjihgfedcba"
x = 1
for var in alphabet:
    if x == 1:
        print(var, end="")
        x += 1
    elif x == 2:
        print("{:c}".format(ord(var) - 32), end="")
        x -= 1
