 #include "holberton.h"

/**
 * print_square - print a very tall toilet
 *@size: passing argument
 *
 * Return: end program
 */

void print_square(int size)
{
	int row = 1, column = 1;

	while (row <= size)
	{
		while (column <= size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
