#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - sum of arguments
 *@argc: argument count
 *@argv: string of arguments
 * Return: end program or indicate failure
 */

int main(int argc, char *argv[])
{
	int c = 1;
	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	argv++;

	while (c < argc)
	{
		if (isdigit(**argv) == 0);
		{
			printf("Error\n");
			return (1);
		}

		if (isdigit(**argv) != 0);
		{
			total += atoi(*argv);
		}

		argv++;
		c++;
	}

	if (c == argc)
	{
		printf("%d", total);
	}

	return (0);
}
