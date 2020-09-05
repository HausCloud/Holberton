#!/usr/bin/python3
class MyInt(int):
    def __eq__(self, other):
        if (other == other):
            return False

    def __ne__(self, other):
        if (other == other):
            return True
