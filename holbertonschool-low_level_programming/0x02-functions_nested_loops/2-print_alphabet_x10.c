#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: end program
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
