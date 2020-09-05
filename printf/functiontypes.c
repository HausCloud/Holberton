#include "holberton.h"
/**
 * pc - prints a char
 * @warwick: arg params
 * Return: returns 1
 */
int pc(va_list warwick)
{
	_putchar(va_arg(warwick, int));
	return (1);
}
/**
 * ps - prints a string
 * @warwick: arg params
 * Return: returns 1
 */
int ps(va_list warwick)
{
	char *string;
	int z;

	string = (va_arg(warwick, char *));
	if (string == NULL)
		string = "(null)";
	for (z = 0; string[z]; z++)
		_putchar(string[z]);
	return (1);
}
/**
 * pp - prints percent symbol
 * @warwick: arg params
 * Return: returns 1
 */
int pp(va_list warwick)
{
	(void)warwick;
	_putchar('%');
	return (1);
}
/**
 * printeger - prints ints
 * @z: the int
 * Return: returns 1
 */
int printeger(int z)
{
	unsigned int _long;
	unsigned int x;
	unsigned int in_;
	unsigned int dig;
	int counter = 0;

	_long = z;
	if (z < 0)
	{
		counter++;
		_putchar('0');
		return (counter);
	}
	if (_long == 0)
	{
		counter++;
		_putchar('0');
		return (counter);
	}

	x = 1;
	while ((_long / x) > 9)
		x = x * 10;
	while (x > 0)
	{
		in_ = _long / x;
		dig = in_ % 10;
		counter++;
		_putchar('0' + dig);
		x = (x / 10);
	}
	return (counter);
}
/**
 * pd - prints numbers
 * @warwick: arg params
 * Return: returns 1
 */
int pd(va_list warwick)
{
	int out;
	int counter;

	out = va_arg(warwick, int);
	counter = printeger(out);
	return (counter);
}
