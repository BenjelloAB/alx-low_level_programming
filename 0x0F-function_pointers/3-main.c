#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - testing the calculator
 * @argv: array of pointers to each arg
 * @argc: number of args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;

	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Erro\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
		print_error(99);
	printf("%d\n", op(a, b));
	return (0);
}
