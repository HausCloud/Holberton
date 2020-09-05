#include "3-calc.h"

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *sign;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sign = argv[2];

	if (b == 0 && (*sign == '/' || *sign == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(sign);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);

	}

	printf("%d\n", f(a, b));

	return (0);
}
