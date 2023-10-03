#include "main.h"

/**
 * create_file - creates a file and writes in it
 * @text_content: text to write in the file
 * @filename: the file name
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, i = 0, fd, w;

	if (filename == NULL || text_content == NULL)
		return (-1);
	while (text_content[i++])
		len++;
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
