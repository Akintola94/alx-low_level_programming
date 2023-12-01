#include "main.h"
#define BUFFERSIZE 1204

/**
 * main - program that cpies content
 * @argc: number of argument
 * @argv: string argument
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_in, fd_out, check_file, checker;
	char buffer[BUFFERSIZE];

	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)

		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (fd_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	check_file = checker = 1;
	while (check_file)
	{
		check_file = read(fd_in, buffer, BUFFERSIZE);
	if (check_file == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (check_file > 0)
		{
			checker = write(fd_out, buffer, check_file);
			if (checker == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	checker = close(fd_in);
	if (checker == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in), exit(100);

	checker = close(fd_out);

	if (checker == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out), exit(100);
	return (0);
}
