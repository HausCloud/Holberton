#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(void)
{
	unsigned long long int fib;
	unsigned long long int num1 = 1, num2 = 2;
	unsigned long long int count = 0;

	while (count < 48)
	{
		if (num1 == 1 && num2 == 2)
			printf("%llu, %llu, ", num1, num2);
		fib = (num1 + num2);
		if (count != 47)
			printf("%llu, ", fib);
		else
			printf("%llu", fib);
		num1 = num2;
		num2 = fib;

		count++;
	}
	putchar(10);

	return (0);
}
