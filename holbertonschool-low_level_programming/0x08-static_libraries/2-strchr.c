#include "holberton.h"

/**
 * _strchr - strchr prototype function
 *@s: represents hello string
 *@c: represents 'l'
 * Return: null
 */

char *_strchr(char *s, char c)
{

	while (*s != 0)
	{
		s++;
		if (*s == c)
			return (s);
	}

	return (0);
}
