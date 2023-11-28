#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer filename
 *
 * @letters: letters it should read and print
 *
 * Return: print letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, size;
	buffer = malloc(sizeof(char) * letters);

	if (!filename)
	return (0);

	if (!buffer)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	size = write(STDOUT_FILENO, buffer, read(fd, buffer, letters));
	if (size == -1 || fd == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (size);
}
