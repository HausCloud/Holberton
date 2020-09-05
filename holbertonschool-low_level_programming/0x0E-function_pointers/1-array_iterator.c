#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - use a function pointer that runs through an array
 * @array: pointer to array
 * @size: number of elements in array
 * @action: pointer to function print_elem & print_elem_hex
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;

	while (c < size)
	{
	(*action)(array[i]);
	i++;
	c++;
	}
}
