#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	if (*s1 < *s2)
		a = (*s2 - *s1);
        else if (*s1 > *s2)
		a = (*s1 - *s2);
	else
		a = 0;

	return (a);
}
