#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

char *buffery(char *file);
void closer(int fd);

/**
 * buffery - allocates a buffer of 1024 bytes
 * @file: The name of the file we are reading or writing to
 * Return: A pointer to a char
 */
char *buffery(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closer - closes fd of files
 * @fd: The file descriptor
 */
void closer(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies what in a file to another file
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, bytesRead, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buffery(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	bytesRead = read(fd1, buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd1 == -1 || bytesRead == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(fd2, buffer, bytesRead);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bytesRead = read(fd1, buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytesRead > 0);

	free(buffer);
	closer(fd1);
	closer(fd2);

	return (0);
}
