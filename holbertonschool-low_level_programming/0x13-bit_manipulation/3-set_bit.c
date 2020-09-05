#include "holberton.h"

/**
 * set_bit - words
 * @n: pointer to integer in main file
 * @index: index
 * Return: *n
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;

	*n |= mask;

	return (1);
}
