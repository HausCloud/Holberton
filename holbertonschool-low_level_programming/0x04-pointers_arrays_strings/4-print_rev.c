#include "holberton.h"

/**
 * print_rev - print string in reverse
 *@s: integer
 * Return: none
 */

void print_rev(char *s)
{
	int a = 0;

	while (*s != 0)
	{
		s++;
		a++;
	}

	while (a >= 0)
	{
		_putchar(*s);
		s--;
		a++;
	}
	_putchar('\n');
}
