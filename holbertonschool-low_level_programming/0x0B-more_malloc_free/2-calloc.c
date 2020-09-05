#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - calloc prototype
 * @nmemb: 98
 * @size: sizeof char
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p1, *p2;
	unsigned int c = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p1 = malloc(nmemb * size);

	p2 = p1;

	if (p1 == NULL)
		return (NULL);

	while (c < nmemb * size)
	{
		*p2 = 0;
		c++;
		p2++;
	}

	return (p1);
}
