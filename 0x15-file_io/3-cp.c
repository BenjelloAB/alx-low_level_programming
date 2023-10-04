#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * check_buffer - check if the buffer is NULL
 * @file: file name
 * Return: void
 */
char *check_buffer(const char *file)
{
	char *b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
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
 * handle_errors - handles -1 values situations in sys calls
 * @b: the buffer to read the data into
 * @f1: the file descriptor of file_from
 * @f2: the file descriptor of file_to
 * @fi: thePOSIX standard error file name
 * @e: string to specify the err type
 * Return: void
 */
void handle_errors(char *b, int f1, int f2, const char *fi, const char *e)
{
	if (strcmp(e, "open_f1") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fi);
		free(b);
		exit(98);
	}
	else if (strcmp(e, "write") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fi);
		free(b);
		closer(f1, f2);
		exit(99);
	}
	else if (strcmp(e, "open") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fi);
		free(b);
		closer(f1, f2);
		exit(99);
	}
	else if (strcmp(e, "read") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fi);
		free(b);
		closer(f1, f2);
		exit(98);
	}
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
	int fd1, fd2, w, bytesRead;
	char *buffer = NULL;

	buffer = check_buffer(argv[2]);
	check_argc(argc);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		handle_errors(buffer, fd1, 1, argv[1], "open_f1");
	umask(0);
	fd2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		if (errno == EEXIST)
		{
			fd2 = open(argv[2], O_WRONLY | O_TRUNC);
			if (fd2 == -1)
				handle_errors(buffer, fd1, fd2, argv[2], "open");
		}
		else
			handle_errors(buffer, fd1, fd2, argv[2], "open");
	}
	bytesRead = read(fd1, buffer, 1024);
	if (bytesRead == -1)
		handle_errors(buffer, fd1, fd2, argv[1], "read");
	while (bytesRead > 0)
	{
		w = write(fd2, buffer, bytesRead);
		if (w == -1)
			handle_errors(buffer, fd1, fd2, argv[2], "write");
		bytesRead = read(fd1, buffer, 1024);
		if (bytesRead == -1)
			handle_errors(buffer, fd1, fd2, argv[1], "read");
		fd2 = open(argv[2], O_APPEND | O_WRONLY);
		if (fd2 == -1)
			handle_errors(buffer, fd1, fd2, argv[2], "open");
	}
	closer(fd1, fd2);
	free(buffer);
	return (0);
}
