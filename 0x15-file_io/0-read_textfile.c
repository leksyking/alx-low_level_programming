#include "main.h"

/**
 * read_textfile - a function that reads text file and prints it
 * to the POSIX standard output
 *
 * @filename: the name of the file to be read
 * @letters: the numbers of letters it should read and print
 *
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd = 0, rd = 0;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	rd = write(STDOUT_FILENO, buf, rd);
	if (rd < 0)
		return (0);

	close(fd);
	free(buf);
	return (rd);
}
