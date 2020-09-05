 #include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: dest
 * @src: src
 * @n: integer
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i = 0;

	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	return (dest);
}
