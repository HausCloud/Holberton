#include "holberton.h"

/**
 * _islower - check for lower case
 *@c: argument to be passed
 *
 * Return: return 1 or 0 depending on condition
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
