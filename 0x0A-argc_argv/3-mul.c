#include <stdio.h>
#include <stdlib.h>

/**
 * main - return the result of multi of two numbers
 * @argv: list of arguments
 * @argc: number of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	int p = 1;

	int number;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
		for (i = 1; i < argc; i++)
		{
			number = atoi(argv[i]);
			p *= number;
		}
		printf("%d\n", p);

	return (0);
}
