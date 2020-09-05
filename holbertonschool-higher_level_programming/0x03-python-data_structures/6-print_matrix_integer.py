#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
        count = 0
        for row in matrix:
                length = len(row) - 1
                for element in row:
                        if count < length:
                                print("{:d} ".format(element), end="")
                                count += 1
                        else:
                                print("{:d}".format(row[-1]), end="")
                count = 0
                print()
