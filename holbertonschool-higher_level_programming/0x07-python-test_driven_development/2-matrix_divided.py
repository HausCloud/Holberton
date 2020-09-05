#!/usr/bin/python3
""" Module to divide a matrix by whatever"""
def matrix_divided(matrix, div):
    """Function that divides matrix by div"""
    if type(matrix) is not (list):
        raise TypeError("matrix must be a matrix (list of lists)\
 of integers/floats")
    for listies in matrix:
        if type(listies) is not (list):
            raise TypeError("matrix must be a matrix (list of lists)\
 of integers/floats")
    for listies in matrix:
        for elements in listies:
            if type(elements) is not (int) and type(elements) is not (float):
                raise TypeError("matrix must be a matrix (list of lists\
) of integers/floats")
    for listies in matrix:
        x = len(matrix[0])
        if x != len(listies):
            raise TypeError("Each row of the matrix must have the same size")
    if type(div) is not (int) and type(div) is not (float):
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")
    new_matrix = []
    for i in range(0, len(matrix)):
        new_list = matrix[i].copy()
        for i in range(0, len(new_list)):
            new_list[i] /= div
            new_list[i] = round(new_list[i], 2)
        new_matrix.append(new_list)
    return new_matrix
