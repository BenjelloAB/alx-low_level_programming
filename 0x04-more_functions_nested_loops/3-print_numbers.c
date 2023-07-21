#include "main.h"
#include <stdio.h>
/**
 * print_numbers - 0->9
 * Return: 0 -> 9 \n
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
