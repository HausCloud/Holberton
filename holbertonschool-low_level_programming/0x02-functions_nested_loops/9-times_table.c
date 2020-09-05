#include "holberton.h"

/**
 * times_table - print 9s multiplication table
 *
 * Return: end function
 *
 */

void times_table(void)
{
	int a, b, n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = (a * b);

			if (n == 0)
				_putchar('0');

			if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}

			if (n > 9)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar(10);
	}
}
