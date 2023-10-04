#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/stat.h>


/**
 * check_buffer - check if the buffer is NULL
 * @b: pointer to the buffer
 * @file: file name
 * Return: void
 */
void check_buffer(char *b, const char *file)
{
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}
/**
 * closer - function to close open files using their files descriptor
 * @fd1: the file descriptor to close
 * @fd2: the file descriptor to close
 * Return: void
 */
void closer(int fd1, int fd2)
{
	int c1, c2;

	c1 = close(fd1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	c2 = close(fd2);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * handle_write - handles -1 write value situation
 * @buffer: the buffer to read the data into
 * @fd1: the file descriptor of file_from
 * @fd2: the file descriptor of file_to
 * @file_name: thePOSIX standard error file name
 * Return: void
 */
void handle_write(char *buffer, int fd1, int fd2, const char *file_name)
{
	closer(fd1, fd2);
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	exit(99);
}
/**
 * check_argc - checks the number of arguments passed
 * @argc: number of arguments passed
 * Return: void
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * main - copie the content form one file to another
 * @argc: counter of the number of args
 * @argv: array of pointers to the arguments
 * Return: int
 */
int main(int argc, const char *argv[])
{
	int fd1, fd2, w, bytesRead, currOffSet = 0;
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * 1024);
	check_argc(argc);
	check_buffer(buffer, argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	umask(0);
	fd2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY | O_APPEND, 0664);
	if (fd2 < 0)
	{
		if (errno == EEXIST)
			fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_APPEND);

	}
	bytesRead = read(fd1, buffer, 1024);
	do {
		w = write(fd2, buffer, bytesRead);
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (w == -1 || lseek(fd1, currOffSet, SEEK_SET) == -1)
			handle_write(buffer, fd1, fd2, argv[2]);
		currOffSet += bytesRead;
		bytesRead = read(fd1, buffer, 1024);
	} while (bytesRead > 0);
	closer(fd1, fd2);
	free(buffer);
	return (0);
}
