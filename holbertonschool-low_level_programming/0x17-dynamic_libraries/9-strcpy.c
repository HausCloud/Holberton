#include "holberton.h"

/**
 * _strcpy - copy string
 *@dest: character
 *@src: character
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int t = 0;

	while (*(src + t) != 0)
	{
		*(dest + t) = *(src + t);
		t++;
	}

	*(dest + t) = 0;

	return (dest);
}
