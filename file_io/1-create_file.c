#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: name of the file to be created
 * @text_content: content to write in the file
 * Return: 1 on success, -1 on failure (file can not be
 * created, file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd_write = write(fd, text_content, strlen(text_content));
	close(fd);
	if (fd_write == -1)
		return (-1);
	return (1);
}
