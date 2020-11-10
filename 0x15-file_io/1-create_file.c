#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 * @filename: file name
 * @text_content: text
 * Return: int.
 */


int create_file(const char *filename, char *text_content)
{
int fd, i;

	for (i = 0; *(text_content + i) != '\0'; i++)
	;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (text_content != '\0')
	{
		write(fd, text_content, i);
	}

	if (fd == 0)
		return (-1);
	if (fd == -1)
		return (0);

		close(fd);

	return (1);
}
