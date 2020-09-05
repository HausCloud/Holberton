#include "holberton.h"

/**
 * swap_int - swap two integers
 *@a: integer a
 *@b: integer b
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
