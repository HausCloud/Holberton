#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: character
 * @s2: character
 * Return: str
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, x = 0, L1 = 0, L2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[i] != '\0'; i++)
		L1++;

	for (i = 0; s2[i] != '\0'; i++)
		L2++;

	str = malloc((L1 + L2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < L1; i++)
	{
		str[i] = s1[i];
	}

	for (; i < (L1 + L2); i++, x++)
	{
		str[i] = s2[x];
	}

	str[i] = '\0';

		return (str);
}
