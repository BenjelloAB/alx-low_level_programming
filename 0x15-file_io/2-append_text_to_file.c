#include "main.h"

/**
 * append_text_to_file - writes a string at the end of the file
 * @filename: the file name
 * @text_content: the string to append at the end of the file
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, i = 0, fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i++])
		len++;
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (w);
	}
	close(fd);
	return (1);
}
