#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - make a duplicate array with malloc
 * @str: pointer to "Holberton"
 * Return: str2
 */

char *_strdup(char *str)
{
	int strlen = 0;
	char *strlenp = str;
	char *newstr;
	char *src;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (*strlenp != '\0')
	{
		strlenp++;
		strlen++;
	}

	newstr = malloc((strlen + 1) * sizeof(char));

	if (newstr == 0)
		return (0);

	src = str;
	dest = newstr;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (newstr);
}
