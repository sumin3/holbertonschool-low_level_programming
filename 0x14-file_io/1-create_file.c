#include "holberton.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: the contect of the text file
 * Return: return 1 on success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	write_count = write(fd, text_content, len);
	if (write_count == -1)
		return (-1);
	close(fd);
	return (1);
}
