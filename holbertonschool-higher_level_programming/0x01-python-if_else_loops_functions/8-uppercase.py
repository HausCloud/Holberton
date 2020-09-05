#!/usr/bin/python3
def uppercase(str):
    for var in str:
        if ord(var) >= 97 and ord(var) <= 122:
            var2 = ord(var) - 32
        else:
            var2 = ord(var)
        print("{:c}".format(var2), end="")
    else:
        print()
