#include "holberton.h"
#include <unistd.h>


/**
 * _printf - a s%#@tty version of printf
 * @format: the string
 * Return: counter or -1 on failure
 */


int _printf(const char *format, ...)
{
	int x, y, counter = 0;
	va_list warwick; /* va_list declaration */
	yeet shaco[] = { /* declare shaco is an array of structures */
		{"c", pc},
		{"s", ps},
		{"%", pp},
		{"d", pd},
		{"i", pd},
		{NULL, NULL},
	};


	if (format == NULL)
		return (-1);


	va_start(warwick, format), x = 0; /* va_list initialization */

	while (format != NULL && format[x] != '\0') /* move through the format */
	{
		if (format[x] == '%') /* detect % sign within format string */
		{
			x++;

			if (format[x] == '\0')
				return (-1);

			y = 0;
			for (;shaco[y].vlad != NULL; y++)
				if (*(shaco[y].vlad) == format[x])
					counter += shaco[y].leesin(warwick); /* call appropriate function */
			x++;
		}
		if (format[x] != '%' && format[x] != '\0')
			counter += _putchar(format[x]), x++;
	}

	va_end(warwick); /* free warwick aka who let the dogs out */

	return (counter); /* return amount of bytes printed */
}
