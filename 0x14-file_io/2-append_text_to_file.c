#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
