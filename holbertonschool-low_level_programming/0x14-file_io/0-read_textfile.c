#include "holberton.h"

/**
 * read_textfile - read file and write to stdout
 * @filename: pointer to file
 * @letters: integer
 * Return: number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ptr;
	int num1, num2;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}

	num1 = read(fd, ptr, letters);
	if (num1 == -1)
	{
		free(ptr);
		return (0);
	}

	close(fd);

	num2 = write(1, ptr, num1);
	if (num2 == -1)
		return (0);

	free(ptr);

	if (num1 != num2)
		return (0);

	return (num2);
}
