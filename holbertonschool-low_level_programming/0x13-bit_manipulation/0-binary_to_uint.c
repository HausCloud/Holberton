#include "holberton.h"

/**
 * binary_to_uint - blah
 * @b: pointer to string
 * Return: sum
 */

unsigned int binary_to_uint(const char *b)
{
	int idx = 0, value = 1;
	int sum = 0;

	if (b == NULL)
		return (0);

	while (b[idx] != '\0')
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		idx++;
	}

	idx--;

	while (idx >= 0)
	{

		if (b[idx] == '1')
			sum += value;

		value *= 2;

		idx--;
	}

	return (sum);
}
