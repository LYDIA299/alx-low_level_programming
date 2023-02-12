#include "main.h"
#define BUFSIZE 1024
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to, nrd, nwr;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nrd = read(fd_from, buf, sizeof(buf))) > 0)
	{
		nwr = write(fd_to, buf, nrd);
		if (nwr != nrd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1 || close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from);
		exit(100);
	}

	return (0);
}
