#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file created
 * @text_content: content to be written in the file
 * Return: 1 0n success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, m, n = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[n])
			n++;
		m = write(fd, text_content, n);
		if (m != n)
			return (-1);
	}

	close(fd);

	return (1);
}
