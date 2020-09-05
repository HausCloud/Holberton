#include "variadic_functions.h"

/**
 * print_strings - print our strings
 * @separator: commaspace
 * @n: number of elements
 * Return: va_list stuff
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *element;
	va_list stuff;

	va_start(stuff, n);

	while (count < n)
	{
		if (separator == NULL)
		{
			element = va_arg(stuff, char *);
			if (element != NULL)
				printf("%s", element);
			else
				printf("(nil)");
		}
		else
		{
			element = va_arg(stuff, char *);
			if (count != (n - 1))
			{
				if (element != NULL)
					printf("%s%s", element, separator);
				else
					printf("(nil)%s", separator);
			}
			else
				if (element != NULL)
					printf("%s", element);
				else
					printf("(nil)");
		}
		count++;
	}
	printf("\n");

	va_end(stuff);
}
