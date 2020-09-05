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
	int total = 0;
	char *a;

	while (--argc > 0)
	{
		a = argv[argc];

		while (*a)
		{
			if (!isdigit(*a))
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}
		total += atoi(argv[argc]);
	}
	printf("%d\n", total);

	return (0);
}
