#include "holberton.h"

/**
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	char *ptr = dest;

	while (*src != 0 && c < n)
	{
		*ptr = *src;
		c++;
		ptr++;
		src++;
	}

	while (c < n)
	{
		*ptr = 0;
		ptr++;
		c++;
	}

	return (dest);
}
