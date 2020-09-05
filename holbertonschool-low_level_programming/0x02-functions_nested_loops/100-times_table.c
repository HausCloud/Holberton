#include "holberton.h"

/**
 * print_times_table - print times table depending on n
 * @n: integer
 * Return: nothing
 */

void print_times_table(int n)
{
	int a, b, m;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			m = (a * b);
			if (m <= 9)
			{
				_putchar('0' + m);
				if (b != n)
					_putchar(','), _putchar(' '), _putchar(' '), _putchar(' ');
			}
			if (m > 9 && m < 100)
			{
				_putchar('0' + (m / 10)), _putchar('0' + (m % 10));
				if (b != n)
					_putchar(','), _putchar(' '), _putchar(' ');
			}
			if (m >= 100)
			{
				_putchar('0' + (m / 100)), _putchar('0' + ((m / 10) % 10)), _putchar('0' + (m % 10));
				if (b != n)
					_putchar(','), _putchar(' ');
			}
		}
		_putchar(10);
	}
}
