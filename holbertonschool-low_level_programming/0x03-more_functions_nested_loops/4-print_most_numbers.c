#include "holberton.h"

/**
 * print_most_numbers - print 0 through 9 except 2 & 4
 *
 * Return: end program
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
