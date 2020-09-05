#include "sort.h"

/**
 * create_array - creates an array
 * @max: max value in array
 * @index_arr: something
 * @count_arr: something
 * Return: pointer to malloc'd integer array
 */

int *create_array(int max, int *index_arr, int *count_arr)
{
	int *array;

	array = (int *)malloc(sizeof(int) * (max + 1));
	if (array == NULL)
	{
		if (index_arr != NULL)
			free(index_arr);
		if (count_arr != NULL)
			free(count_arr);
		return (NULL);
	}
	return (array);
}
/**
 * order_array - function order array
 * @array: array to put in order
 * @size: size of array
 * @index_arr: needed to pass in case of malloc fail in order to free
 * @count_arr: needed to pass in case of malloc fail in order to free
 * @sum_arr: needed to pass in case of malloc fail in order to free
 * Return: void
 */
void order_array(int *array, size_t size,
		 int *index_arr, int *count_arr, int *sum_arr)
{
	int *ord_array;
	size_t i;

	ord_array = malloc(sizeof(int) * size);
	if (ord_array == NULL)
	{
		free(sum_arr);
		free(count_arr);
		free(index_arr);
		return;
	}
	for (i = 0; i < size; i++)
	{
		ord_array[(sum_arr[array[i]]) - 1] = array[i];
		sum_arr[array[i]] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = ord_array[i];
	free(ord_array);
}
/**
 * counting_sort - sort an array using counting sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	int max, min_count, *index_arr, *count_arr, *sum_arr, idx2 = 0;
	unsigned int idx = 0;

	if (array == NULL || size <= 1)
		return;
	for (max = array[0]; idx < size; idx++)
		if (array[idx] > max)
			max = array[idx];
	index_arr = create_array(max, NULL, NULL);
	if (index_arr == NULL)
		return;
	for (idx = 0, min_count = 0; min_count <= max; min_count++, idx++)
		index_arr[idx] = min_count;
	count_arr = create_array(max, index_arr, NULL);
	if (count_arr == NULL)
		return;
	for (idx2 = 0; idx2 <= max; idx2++)
		count_arr[idx2] = 0;
	for (idx = 0; idx < size; idx++)
		count_arr[(array[idx])] += 1;
	sum_arr = create_array(max, index_arr, count_arr);
	if (sum_arr == NULL)
		return;
	idx2 = 0, sum_arr[idx2] = count_arr[0];
	for (idx2 = 1; idx2 <= max; idx2++)
		sum_arr[idx2] = (sum_arr[idx2 - 1] + count_arr[idx2]);
	for (idx2 = 0; idx2 <= max; idx2++)
	{
		printf("%d", sum_arr[idx2]);
		if (idx2 != max)
			printf(", ");
	}
	printf("\n");
	order_array(array, size, index_arr, count_arr, sum_arr);
	free(index_arr), free(count_arr), free(sum_arr);
}
