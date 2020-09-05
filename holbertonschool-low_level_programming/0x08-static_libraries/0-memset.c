#include "holberton.h"

/**
 * _memset - memset prototype function
 *@s: represents buffer
 *@b: represents 0x01
 *@n: represents given bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;
	char *ptr = s;

	while (a < n)
	{
		*ptr = b;
		ptr++;
		a++;
	}

	return (s);
}
