#include "holberton.h"


char *_strcpy(char *dest, char *src)
{
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}


	return(dest);
}
