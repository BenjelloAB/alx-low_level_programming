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
	int i, j;

	int s = 0;

	int number;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{

		if ((argv[i][j] >= 65 && argv[i][j] <= 90)
		|| (argv[i][j] >= 97 && argv[i][j] <= 122))
		{
			printf("Error\n");
			return (1);
		}
		j++;
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
