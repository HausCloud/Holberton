#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: either null or p1
 */

int *array_range(int min, int max)
{
	int *p1, *p2, c;

	c = min;

	if (min > max)
		return (NULL);

	p1 = malloc((max + 1 - c) * sizeof(int));

	p2 = p1;

	if (p1 == NULL)
		return (NULL);

	while (c <= max)
	{
		*p2 = c;
		c++;
		p2++;
	}


	return (p1);
}
