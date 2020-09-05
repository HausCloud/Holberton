#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer in array and return the index
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c = 0;
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (c < size)
	{
		c++;

		if ((*cmp)(array[i]) == 0)
			i++;
		else
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}
