#include "holberton.h"

/**
 * _isdigit - check digit for 0 through 9
 *@c: integer
 *
 *Return: return 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
