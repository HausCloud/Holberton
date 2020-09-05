#include "holberton.h"
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == '\0' && *s2 == '\0')
			break;
		if (*s1 == *s2)
			s1++, s2++;
		else
			return (*s1 - *s2);
	}
	return (0);
}
