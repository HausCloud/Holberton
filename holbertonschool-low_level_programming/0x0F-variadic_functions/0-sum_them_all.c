#include "variadic_functions.h"

/**
 * sum_them_all - add up all arguments using variadic function
 * @n: number of arguments
 *
 * Return: summation of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0;
	unsigned int sum = 0;
	va_list stuff;

	if (n == 0)
		return (0);

	va_start(stuff, n);

	while (count < n)
	{
		sum += va_arg(stuff, unsigned int);
		count++;
	}
	va_end(stuff);

	return (sum);
}
