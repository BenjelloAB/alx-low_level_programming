#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argv: list of arguments
 *@argc: number of argumnents
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	int s = 0;

	int number;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if ((*argv[i] >= 65 && *argv[i] <= 90) || (*argv[i] >= 97 && *argv[i] <= 122))
		{
			printf("Error\n");
			return (1);
		}
		number = atoi(argv[i]);
		if (number < 0)
		{
			printf("Error\n");
			return (1);
		}
		s += number;
	}
	printf("%d\n", s);
	return (0);
}
