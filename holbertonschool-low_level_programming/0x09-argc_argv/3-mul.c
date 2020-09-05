#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * main - multiply two integers
 *@argc: argument count
 *@argv: string of arguments
 * Return: end program
 */

int main(int argc, char *argv[])
{
	int a, b;
	int mul;

	if (argc == 3)
	{
		argv++;
		a = atoi(*argv);
		argv++;
		b = atoi(*argv);
		mul = (a * b);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
