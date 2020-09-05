 #include "holberton.h"

/**
 * _strcat - concatenate two strings
 *@dest: parameter to argument s1
 *@src: parameter to argument s2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	return (dest);
}
