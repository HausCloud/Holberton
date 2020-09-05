#include "holberton.h"

/**
 * main - write from one file to another
 * @ac: argument counter
 * @av: argument vector
 * Return: zero on success otherwise exit with code
 */

int main(int ac, char *av[])
{
	int fd, fd2, count;
	char buffer[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	close(fd);

	fd = open(av[2], O_TRUNC | O_CREAT | O_RDWR, 0664);
	if (fd == -1)
	{
		close(fd);
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	fd2 = open(av[1], O_RDONLY);

	do {
		count = read(fd2, buffer, 1024);
		write(fd, buffer, count);
	} while (count != 0);

	close(fd), close(fd2);

	return (0);
}
