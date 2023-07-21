#include "main.h"

/**
 * print_diagonal - print a diagonal of sapces and \ at the end
 * @n: holds the number of rows
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j <= i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}

