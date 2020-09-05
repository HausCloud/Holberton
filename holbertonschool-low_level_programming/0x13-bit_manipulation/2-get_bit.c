#include "holberton.h"

/**
 * get_bit - blah
 * @n: blah
 * @index: blah
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;

	if (n & mask)
		return (1);
	else
		return (0);


}
