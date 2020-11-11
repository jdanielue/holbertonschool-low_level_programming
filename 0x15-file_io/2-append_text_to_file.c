#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename: file name
 * @text_content: text
 * Return: int.
 */

int append_text_to_file(const char *filename, char *text_content)

{
int fd, i;
ssize_t copiar;
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
	for (i = 0; *(text_content + i) != '\0'; i++)
	;
	}

	fd = open(filename, O_WRONLY | O_APPEND);


	if (fd == -1)
		return (-1);

		copiar = write(fd, text_content, i);

	if (copiar == -1)
		return (-1);

		close(fd);

	return (1);
}
