#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    matrix_cpy = []
    for row in matrix:
        var = [(x ** 2) for x in row]
        matrix_cpy.append(var)
    return (matrix_cpy)
