#include <stdio.h>
#include <stdlib.h>

/**
	* main - prints min number of coimns to make change for an amount of money
	* @argv: list of arguments
	* @argc: number of arguments
	*Return: int
	*/
int main(int argc, char *argv[])
{
	int number, count = 0;

	if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}
	number = atoi(argv[1]);
	while (number > 0)
	{
	count++;
	if (number >= 25)
	{
	number -= 25;
	continue;
	}
	if (number >= 10)
	{
	number -= 10;
	continue;
	}
	if (number >= 5)
	{
	number -= 5;
	continue;
	}
	if (number >= 2)
	{
	number -= 2;
	continue;
	}
	if (number >= 1)
	{
		number -= 1;
		continue;
	}
	number--;
	}
	printf("%d\n", count);
	return (0);
}
