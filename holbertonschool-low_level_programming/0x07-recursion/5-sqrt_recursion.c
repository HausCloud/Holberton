#include "holberton.h"

/**
 * _sqrt_recursion - call function check
 * squarert - square root n
 *@a: integer
 *@b: integer
 *
 * Return: function check
 */

int squarert(int a, int b)
{
	if (a * a == b)
		return (a);

	if (a * a > b)
		return (-1);

	return (check(a + 1, b));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squarert(0, n));
}
