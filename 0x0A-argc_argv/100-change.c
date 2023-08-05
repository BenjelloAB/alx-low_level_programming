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
	int count = 0;

	int number;

	if (argc < 2)
	{
	puts("Error");
	return (1);
	}
	number = atoi(argv[1]);
	while (1 == 1)
	{
	if (number == 0)
		break;
	if (number >= 25)
	{
	number -= 25;
	count++;
	continue;
	}
	if (number >= 10)
	{
	number -= 10;
	count++;
	continue;
	}
	if (number >= 5)
	{
	number -= 5;
	count++;
	continue;
	}
	if (number >= 1)
	{
	number -= 1;
	count++;
	continue;
	}
	}
	printf("%d\n", count);

	return (0);
}
