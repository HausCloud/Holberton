#include "holberton.h"

/**
 * rev_string - reverse string
 *@s: character
 * Return: none
 */

void rev_string(char *s)
{
	char *b = s;
	char *e = s;
	char t;

	while (*s != 0)
	{
		s++;
		e++;
	}

	e--;

	while (b < e)
	{
		t = *b;
		*b = *e;
		*e = t;
		b++;
		e--;
	}
}
