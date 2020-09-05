#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    x = 1
    length = len(sys.argv)
    if length == 1:
        print("0 arguments.")
    elif length == 2:
        print("1 argument:")
        print("1: {:s}".format(sys.argv[1]))
    else:
        print("{:d} arguments:".format(len(sys.argv) - 1))
        while x < length:
            print("{:d}: {:s}".format(x, sys.argv[x]))
            x += 1
