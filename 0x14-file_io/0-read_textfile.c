#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: the name of the file
 * @letters: the num of character that should write
 * Return: 1. if the file can not be opened or read
 *         2. if the filename is NULL
 *         3. if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_char_write, num_char_read;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	num_char_read = read(fd, buffer, letters);
	if (num_char_read == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	num_char_write = write(1, buffer, num_char_read);
	free(buffer);
	if (num_char_write == -1 || (num_char_write != num_char_read))
		return (0);
	else
		return (num_char_write);
}
