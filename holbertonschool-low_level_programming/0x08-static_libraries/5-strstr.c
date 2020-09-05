#include "holberton.h"

/**
 * _strstr - strstr prototype function
 *@haystack: string hello world
 *@needle: string world
 * Return: null or needle
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = needle;

	while (*p != *haystack)
	{
		haystack++;
	}

	while (*p == *haystack)
	{
		if (*haystack == 0)
		{
			return (needle);
		}

		p++;
		haystack++;
	}

	return (0);
}
