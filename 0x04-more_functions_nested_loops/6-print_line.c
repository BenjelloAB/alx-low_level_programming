#include "main.h"

/**
 * print_line - print n * '_'
 * @n: var to hold the number of time we print '_'
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
