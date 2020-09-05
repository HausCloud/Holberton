#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: pointer to integer
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int *p;
	int t;

	p = a;

	while (n > 1)
	{
		p++;
		n--;
	}

	while (a < p)
	{
		t = *a;
		*a = *p;
		*p = t;
		a++;
		p--;
	}

}
