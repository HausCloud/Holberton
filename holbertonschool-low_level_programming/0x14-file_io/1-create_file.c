#include "holberton.h"

/**
 * _strlen - get string length
 * @s: pointer to string
 * Return: integer
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
		s++, c++;

	return (c);
}

/**
 * create_file - make a file and put text in it
 * @filename: pointer to first argv
 * @text_content: pointer to second argv
 * Return: Success 1 or Err -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int errchk;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);

		return (1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		errchk = write(fd, text_content, _strlen(text_content));
		if (errchk == -1)
			return (-1);

		close(fd);
	}
	return (1);
}
