#include "holberton.h"

/**
 * _strlen - print string length
 *@s: character
 *
 * Return: integer a
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != 0)
	{
		s++;
		a++;
	}
	return (a);
}
