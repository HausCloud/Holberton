#include "holberton.h"

/**
 * print_line - draw line in terminal
 *@n: passing argument
 *
 * Return: end program
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
