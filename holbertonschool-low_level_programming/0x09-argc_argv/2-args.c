#include <stdio.h>
#include "holberton.h"

/**
 * main - print all arguments received
 *@argc: argument count
 *@argv: string of arguments
 * Return: end program
 */

int main(int argc, char *argv[])
{
	int c = 0;
	int i = 0;

	while (c < argc)
	{
		printf("%s\n", argv[i]);
		c++;
		argv++;
	}

	return (0);
}
