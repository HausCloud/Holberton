#include "holberton.h"

/**
 * print_numbers - print 0 to 9 with new line
 *
 * Return: end program
 */

void print_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
