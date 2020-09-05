#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocate memory other exit 98
 * @b: unsign integer
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
