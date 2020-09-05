#include "variadic_functions.h"

/**
 * print_numbers - print integers using variadic function
 * @separator: commaspace
 * @n: number of elements
 * Return: va_list stuff
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list stuff;

	va_start(stuff, n);

	while (count < n)
	{
		if (separator != NULL)
		{
			if (count != (n - 1))
				printf("%d%s", va_arg(stuff, unsigned int), separator);
			else
				printf("%d", va_arg(stuff, unsigned int));
		}

		if (separator == NULL)
			printf("%d", va_arg(stuff, unsigned int));

		count++;
	}

	printf("\n");

	va_end(stuff);
}
