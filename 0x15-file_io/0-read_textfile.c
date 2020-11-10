#include "holberton.h"

/**
 * read_textfile - read the file.
 * @filename: file name
 * @letters:number of letters
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	char *buf;
	ssize_t leidos;
	ssize_t  copiados;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	leidos = read(fd, buf, letters);
	copiados = write(STDOUT_FILENO, buf, leidos);

	close(fd);
	free(buf);
	return (copiados);
}
