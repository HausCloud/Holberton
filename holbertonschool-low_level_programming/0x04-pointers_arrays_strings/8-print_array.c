#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print array
 *@a: integer
 *@n: integer
 * Return: none
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *a);

		if (count != (n - 1))
			printf(", ");
		a++;
		count++;
	}
	printf("\n");
}
