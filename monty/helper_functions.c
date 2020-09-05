#include "monty.h"

/**
 * cmd_line_chk - checks if the command line argument is valid
 * @str: argv[1]
 * @n: argc
 */

void cmd_line_chk(char *str, int n)
{
	int fd;

	if (n != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	fd = open(str, O_RDONLY);
	if (fd == -1)
		fprintf(stderr, "Error: Can't open file %s\n", str), exit(EXIT_FAILURE);
}

/**
 * int_chk - checks whether a string is all integers
 * @str: input string
 * Return: -1 if string is not entirely made of integers & 0 on success
 */

int int_chk(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (-1);
		str++;
	}
	return (0);
}

/**
 * mfail - print malloc error and exit
 */

void mfail(void)
{
	fprintf(stderr, "Error: malloc failed"), exit(EXIT_FAILURE);
}

/**
 * free_list - traverses a list and frees each node (freeing list)
 * @ptr: GS.head_ptr (ptr to beginning of list)
 */

void free_list(stack_t *ptr)
{
	stack_t *ptr2;

	if (ptr != NULL)
	{
		ptr2 = ptr;
		while (ptr->next != NULL)
			ptr = ptr->next, free(ptr2), ptr2 = ptr;
		free(ptr);
	}
}

/**
 * list_len - return number of nodes with list
 * @ptr: ptr to beginning of list
 * Return: number of nodes
 */

int list_len(stack_t *ptr)
{
	unsigned int count = 0;

	while (ptr != NULL)
		ptr = ptr->next, count += 1;

	return (count);
}
