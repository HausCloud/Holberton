#include "holberton.h"

/**
 * factorial - get the factorial of n
 *@n: integer
 * Return: 1, -1, or factorial
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	else
	{
		return (-1);
	}

}
