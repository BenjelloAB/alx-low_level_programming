#include <stdio.h>

/**
 * main - returns all arguments
 * @argv: list og arguments 
 * @argc: number of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}
