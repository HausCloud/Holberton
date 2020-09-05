#include "holberton.h"

/**
 * _abs - give absolute value
 *@j: data type
 *
 * Return: end program
 */

int _abs(int j)
{
	int z;

	z = (j * -1);

	if (j > 0)
	{
		return (j);
	}
	else
	{
		return (z);
	}
}
