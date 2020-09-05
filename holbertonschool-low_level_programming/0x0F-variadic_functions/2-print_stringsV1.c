#include "variadic_functions.h"

/**
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list stuff;

	va_start(stuff, n);

	while (count < n)
	{

		if (separator != NULL)
			{
				if (count != (n - 1))
					printf("%s%s", va_arg(stuff, char *), separator);
				else
					printf("%s", va_arg(stuff, char *));
			}

		if (separator == NULL)
			printf("%s", va_arg(stuff, char *);

			       count++;
	}
	printf("\n");

	va_end(stuff);
}
