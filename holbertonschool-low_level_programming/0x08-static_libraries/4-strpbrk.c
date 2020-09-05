#include "holberton.h"

/**
 * _strpbrk - strpbrk prototype function
 *@s: represents string hello world
 *@accept: represents string world
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != 0)
	{
		while (*p != 0)
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
		if (*p == 0)
		{
			p = accept;
		}
	}

	return (0);
}
