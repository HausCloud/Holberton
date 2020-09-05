#include "holberton.h"

/**
 *
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	if (*s1 < *s2)
	{
		a = (*s1 - *s2);
	}
	else if (*s1 > *s2)
	{
		a = (*s1 - *s2);
	}

		return (a);
}
