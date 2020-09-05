#include "holberton.h"
#include <stdio.h>
char *cap_string(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		if (s[idx] == ' ' || s[idx] == '\n' ||
		    s[idx] == ',' || s[idx] == ';' || s[idx] == '.' ||
		    s[idx] == '!' || s[idx] == '?' || s[idx] == '"' ||
		    s[idx] == '(' || s[idx] == ')' || s[idx] == '{' ||
		    s[idx] == '}')
		{
			idx++;
			if (s[idx] >= 'a' && s[idx] <= 'z')
				(s[idx]) = (s[idx]) - 32;
			continue;
		}
		if (s[idx] == '\t')
		{
			while (s[idx] == ' ')
				idx++;
			if (s[idx] >= 'a' && s[idx] <= 'z')
				(s[idx]) = (s[idx]) - 32;
			continue;
		}
		idx++;
	}
	return (s);
}
