#include "holberton.h"

/**
 * print_diagonal - print a diagonal line
 *@n: integer
 *
 * Return: end program
 */

void print_diagonal(int n)
{
	int y, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
