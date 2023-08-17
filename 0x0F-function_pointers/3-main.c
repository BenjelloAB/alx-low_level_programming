#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * print_error - print the error code
 * @code: code of exit
 * Return: void
 */
void print_error(int code)
{
	printf("Error\n");
	exit(code);
}
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
		print_error(98);
	}
	if (argv[2][1] != '\0')
		print_error(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
		print_error(99);
	printf("%d\n", op(a, b));
	return (0);
}
