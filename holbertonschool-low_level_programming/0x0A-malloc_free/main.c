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
	char *ptr = str;
	int length = 0;
	int i = 0;
	char *str2;

	if (str == 0)
	{
		return (0);
	}

	while (*ptr != 0)
	{
		ptr++;
		length++;
	}

	ptr = str;

	str2 = malloc(length * sizeof(char));

	while (i < length)
	{
		str2[i] = *ptr;
		i++;
		ptr++;
	}

	str -= length;

	return (str2);
}
