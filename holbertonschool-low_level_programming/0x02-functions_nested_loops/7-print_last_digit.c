#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 *@x: data type
 *
 * Return: end program
 */

int print_last_digit(int x)
{
	int r;

	r = (x % 10);
	if (r >= 0)
	{
		_putchar('0' + r);
	}
	else
	{
		r = (r * -1);
		_putchar('0' + r);
	}
	return (r);
}
