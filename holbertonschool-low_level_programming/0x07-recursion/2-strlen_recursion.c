#include "holberton.h"

/**
 * _strlen_recursion - returns length of string
 *@s: character
 * Return: c
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s == 0)
	{
		return (c);
	}

	c = _strlen_recursion(s + 1);
	c++;

	return (c);
}
