#include "search_algos.h"

/**
 * print_subarr - prints subarray using two endpoints
 * @array: array to find and print subarray
 * @start: beginning index of subarray
 * @stop: ending index of subarray
 */

void print_subarr(int *array, size_t start, size_t stop)
{
	printf("Searching in array: ");
	for (; start < stop + 1; start++)
	{
		printf("%d", array[start]);
		if (start != stop)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search through sorted array using binary search
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be matched
 * Return: index of value if matched, otherwise -1 on failure
 */


int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_subarr(array, left, right);
		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}


	return (-1);
}
