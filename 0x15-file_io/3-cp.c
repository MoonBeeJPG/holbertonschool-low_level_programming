#include "main.h"

/**
 *main - asd
 *@argc: asd
 *@argv: asd
 *Return: asd
 **/
int main(int argc, char *argv[])
{
	int origin_fd = 0, to_fd = 0;
	int length_read = 0, length_write = 0, close_var = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	origin_fd = open(argv[1], O_RDONLY);
	if (origin_fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((length_read = read(origin_fd, buffer, 1024)) != 0)
	{
		if (length_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		length_write = write(to_fd, buffer, length_read);
		if (length_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_var = close(origin_fd);
	if (close_var == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin_fd), exit(100);
	close_var = close(to_fd);
	if (close_var == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);
	return (0);
}
