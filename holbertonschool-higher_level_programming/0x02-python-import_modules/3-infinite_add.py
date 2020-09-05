#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    sum = 0
    count = 1
    length = len(sys.argv)
    if length == 1:
        print("{:d}".format(sum))
    else:
        while count != length:
            sum += int(sys.argv[count])
            count += 1
        print("{:d}".format(sum))
