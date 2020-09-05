#include "monty.h"

/**
 * not_parser - stuff
 * @str: entire line
 * @n: line number
 */

void not_parser(char *str, unsigned int n)
{
	char buf1[100], buf2[100];
	unsigned int x, idx1 = 0;
	int err_chk = -1;
	instruction_t s_arr[] = { {"push", push_ele}, {"pall", print_all},
				  {"pint", print_top}, {"pop", rm_ele},
				  {"swap", swappy}, {"add", sum},
				  {"sub", diff}, {"pchar", chara},
				  {"nop", nada}, {'\0', NULL} };

	x = sscanf(str, "%s %s", buf1, buf2);
	if ((strcmp(s_arr[0].opcode, buf2) == 0))
		if (x == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", n);
			exit(EXIT_FAILURE);
		}
	for (GS.push_int_ptr = buf2; s_arr[idx1].opcode != '\0'; idx1++)
		if ((strcmp(s_arr[idx1].opcode, buf1) == 0))
			s_arr[idx1].f(&GS.head_ptr, n), err_chk = 0;
	if (err_chk == -1)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", n, buf1);
		exit(EXIT_FAILURE);
	}
}

/**
 * read_file - reads from file one line at a time
 * @str: av[1] aka filename
 */

void read_file(char *str)
{
	FILE *fp;
	char buffer[500];
	unsigned int line_num = 0;

	fp = fopen(str, "r");

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		line_num += 1;
		if ((strlen(buffer) == 1))
			continue;
		not_parser(buffer, line_num);
	}
	fclose(fp);
	free_list(GS.head_ptr);
}

/**
 * main - main function
 * @ac: argument count
 * @av: argument vector aka array of strings
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	GS.head_ptr = NULL;

	cmd_line_chk(av[1], ac);
	read_file(av[1]);

	return (0);
}
