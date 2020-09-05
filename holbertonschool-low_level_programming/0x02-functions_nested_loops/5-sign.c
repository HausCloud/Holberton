#include "holberton.h"

/**
 * print_sign - print sign of number
 *@n: argument to be passed
 *
 * Return: 0, 1, -1 depending on condition
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
