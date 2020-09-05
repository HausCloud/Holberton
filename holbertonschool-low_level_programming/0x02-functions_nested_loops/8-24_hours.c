#include "holberton.h"

/**
 * jack_bauer - print every minute from 00:00 to 23:59
 *
 * Return: end program
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a == 2 && b == 4)
			{
				break;
			}
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
