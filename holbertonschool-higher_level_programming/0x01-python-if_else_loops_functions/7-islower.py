#!/usr/bin/python3
def islower(c):
    husky = ord(c)
    if husky >= 97 and husky <= 122:
        return True
    elif husky >= 65 and husky <= 90:
        return False
