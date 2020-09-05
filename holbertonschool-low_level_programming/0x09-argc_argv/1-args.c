#include <stdio.h>
#include "holberton.h"

/**
 * main - print number of arguments
 *@argc: argument count
 *@argv: string of arguments
 * Return: end program
 */

int main(int argc, char *argv[])
{
	int a = (argc - 1);

	printf("%d\n", a);

	(void)argv;

	return (0);
}
