#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_char_write, num_char_read;
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num_char_read = read(fd, buffer, letters);
	close(fd);
	num_char_write = write(1, buffer, num_char_read);
	if (num_char_write < 0)
		return (0);
	else
		return (num_char_write);
	free(buffer);
}
