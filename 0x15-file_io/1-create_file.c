#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to be created
 * @text_content: contents of file to be created
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd = 0, wr = 0, i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	while (text_content[i])
		i++;
	wr = write(fd, text_content, i);
	if (wr < 0)
		return (-1);
	close(fd);

	return (1);
}
