#include "holberton.h"

/**
 * _abs - give absolute value
 *@j: data type
 *
 * Return: end program
 */

int _abs(int n)
{
	int z;

	z = (n * -1);

	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (z);
	}
}
