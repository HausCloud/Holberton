#include "holberton.h"

/**
 * _isalpha - check for alphabetic character
 *@c: argument to be passed
 *
 * Return: return 1 or 0 depending on condition
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
