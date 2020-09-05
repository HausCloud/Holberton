#include "variadic_functions.h"

/**
 * p_c - print character
 * @wdf: valist
 * Description: Stuff
 */

void p_c(va_list wdf)
{
		printf("%c", va_arg(wdf, int));
}

/**
 * p_i - print integer
 * @wdf: valist
 * Description: Stuff
 */

void p_i(va_list wdf)
{
		printf("%d", va_arg(wdf, int));
}

/**
 * p_f - print float
 * @wdf: valist
 * Description: Stuff
 */

void p_f(va_list wdf)
{
		printf("%f", va_arg(wdf, double));
}

/**
 * p_s - print string
 * @wdf: valist
 * Description: Stuff
 */

void p_s(va_list wdf)
{
	char *s = va_arg(wdf, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
}

/**
 * print_all - find correct function based on format string
 * @format: string
 * Description: stuff
 */

void print_all(const char * const format, ...)
{
	va_list stuff;
	int index1 = 0, index2 = 0;
	yeet array[] = {
		{'c', p_c},
		{'i', p_i},
		{'f', p_f},
		{'s', p_s},
		{'\0', NULL}
	};

	if (format == NULL)
		return;

	va_start(stuff, format);

	while (format[index1] != '\0')
	{
		while (array[index2].Q != '\0')
		{
			if (array[index2].Q == format[index1])
			{
				array[index2].fptr(stuff);
				if (format[index1 + 1] != '\0')
					printf(", ");
			}
			index2++;
		}
		index1++, index2 = 0;
	}
	printf("\n");

	va_end(stuff);
}
