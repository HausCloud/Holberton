#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int c = 0;

	while (c <= 100)
	{
		if (c % 15 == 0 && c != 0)
			printf("FizzBuzz ");
		else if (c % 5 == 0 && c != 0)
			printf("Buzz ");
		else if (c % 3 == 0 && c != 0)
			printf("Fizz ");
		else if (c != 0)
			printf("%d ", c);
		c++;
	}

	return (0);
}
