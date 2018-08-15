#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argument
 * @argv: the argument
 * Return: return 0
 */
int main(int argc, char **argv)
{
	char *file_from = NULL, *file_to = NULL, *buffer = NULL;
	int fd1, fd2, read_count, write_count;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	/* open file_from */
	file_from = argv[1];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,
		      "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	/* open file_to */
	file_to = argv[2];
	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO,
		      "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	/* copy content */
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	read_count = read(fd1, buffer, 1024);
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO,
		      "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while (read_count == 1024)
	{
		write_count = write(fd2, buffer, 1024);
		if (write_count == -1)
		{
			printf("1 write\n");
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			exit(99);
		}
		if (close(fd2) == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd2);
			exit(100);
		}
		fd2 = open(file_to, O_RDWR | O_APPEND);
		read_count = read(fd1, buffer, 1024);
		if (read_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	write_count = write(fd2, buffer, read_count);
	if (write_count == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	free(buffer);
	return (0);
}
