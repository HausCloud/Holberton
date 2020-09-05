#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings using memory allocated through malloc
 *@s1: character string
 *@s2: character string
 * Return: newstr
 */

char *str_concat(char *s1, char *s2)
{
	int strlen1 = 0, strlen2 = 0;
	char *ptr1 = s1, *ptr2 = s2;
	char *newstr, *dest;
	if (ptr1 == NULL)
		ptr1 = "";
	if (ptr2 == NULL)
		ptr2 = "";

	while (*ptr1 != '\0')
		ptr1++, strlen1++;
	while (*ptr2 != '\0')
		ptr2++, strlen2++;
	newstr = malloc((strlen1 + strlen2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	ptr1 = s1, ptr2 = s2, dest = newstr;
	while (*ptr1 != '\0')
		*dest = *ptr1, dest++, ptr1++;
	while (*ptr2 != '\0')
		*dest = *ptr2, dest++, ptr2++;
	*dest = '\0';
	return (newstr);
}
