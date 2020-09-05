#include "search_algos.h"

/**
 * linear_search - search for value in array of integers using linear search
 * @array: array to be searched
 * @size: size of array
 * @value: value to match
 * Return: index of value or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
