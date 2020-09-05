#include "holberton.h"

/**
 * puts_half - print half of string
 *@str: string in main function
 * Return: none
 */

void puts_half(char *str)
{
	char *ptr = str;
	int count = 0;

	while (ptr != '\0')
		ptr++, count++;

	if ((count % 2) != 0)
	{
		count--;
		count /= 2;
	}
	else
		count /= 2;

	ptr = str;

	while (count > 0)
	{
		ptr++;
		count--;
	}

	while (ptr != '\0')
		ptr++, _putchar(*ptr);
}
