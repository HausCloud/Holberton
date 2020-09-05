#include "holberton.h"

/**
 * _memcpy - memcpy prototype function
 *@dest: represents buffer
 *@src: represents buffer2
 *@n: n parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	char *ptr = dest;

	while (a < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		a++;
	}

	return (dest);
}
