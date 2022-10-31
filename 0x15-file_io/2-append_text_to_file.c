#include "main.h"

/**
 * append_text_to_file - a function that appends text at the
 * of a file
 * @filename: file to append text to.
 * @text_content: text to append to file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		wr = write(fd, text_content, i);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
