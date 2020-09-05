#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int *ptr, *ptr2;
	int **dptr;
	int count = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(width * height);

	ptr2 = ptr;

	while (count < (width * height))
	{
		*ptr2 = 0;
		ptr2++, count++;
	}

	dptr = &ptr;

	return (dptr);
}
