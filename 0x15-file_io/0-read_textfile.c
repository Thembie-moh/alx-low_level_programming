#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function will read textfile to print for STDOUT
 * @filename: The text file to be read
 * @letters: The numbers of the files to be read
 * Return: The number of bytes to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
