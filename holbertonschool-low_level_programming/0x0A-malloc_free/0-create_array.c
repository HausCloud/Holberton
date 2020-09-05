#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - make an array of H's
 * @size: size of array
 * @c: 'H'
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);

}
