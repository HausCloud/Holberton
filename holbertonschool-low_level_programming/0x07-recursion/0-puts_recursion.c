#include "holberton.h"

/**
 * _puts_recursion - print a string using recursion
 *@s: character
 * Return: main function
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
