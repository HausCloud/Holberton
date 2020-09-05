#include "holberton.h"

/**
 * flip_bits - flip the bits ..
 * @n: integer
 * @m: integer
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned long int meatballs = (n ^ m);
	unsigned long int count = 0;

	while (meatballs > 0)
	{
		if ((meatballs & mask) != 0)
			count++;

		meatballs = meatballs >> 1;
	}

	return (count);
}
