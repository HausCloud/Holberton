#include "holberton.h"

/**
 * _strspn - strspn prototype function
 *@s: represents string hello, world
 *@accept: represents oleh
 * Return: null or c
 */

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;

	char *ptr1 = accept;

	while (*s != 0)
	{
		while (*ptr1 != 0)
		{
			if (*ptr1 == *s)
			{
				c++;
				break;
			}
			ptr1++;
		}
		if (*ptr1 == 0)
		{
			return (c);
		}
		ptr1 = accept;
		s++;
	}

	return (0);
}
