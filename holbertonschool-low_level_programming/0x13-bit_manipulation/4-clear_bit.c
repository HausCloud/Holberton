#include "holberton.h"

/**
 * clear_bit - set bit at index to 0
 * @n: pointer to integer in main file
 * @index: integer
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	if (n == NULL)
		return (-1);

	mask = mask << index;

	if ((*n & mask) != 0)
		*n = *n ^ mask;

	return (1);
}
