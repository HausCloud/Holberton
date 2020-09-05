#include "holberton.h"

/**
 * _strlen - get string length
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * append_text_to_file - append to file
 * @filename: argv[1]
 * @text_content: argv[2]
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int errchk;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		errchk = write(fd, text_content, _strlen(text_content));
		if (errchk == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
