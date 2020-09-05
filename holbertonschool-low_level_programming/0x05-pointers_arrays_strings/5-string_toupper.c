#include "holberton.h"

/**
 * string_toupper - change string to uppercase
 * @s: pointer to string
 * Return: string
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p != 0)
	{
		if (*p > 97 && *p < 122)
		{
			*p -= 32;
		}
		p++;
	}

	return (s);
}
