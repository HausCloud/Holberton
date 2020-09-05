#include <stdio.h>

/**
 * main - print multiples of 3 and 5 to 1024
 * Return: nothing
 */

int main(void)
{
	int sum = 0;
	int num = 0;

	while (num < 1024)
	{
		if ((num % 5) == 0)
			sum += num;
		else if ((num % 3) == 0)
			sum += num;
		num++;
	}

	printf("%d\n", sum);

	return (0);
}
