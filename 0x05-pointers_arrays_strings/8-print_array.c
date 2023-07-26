#include "main.h"

/**
 * print_array - print n element from the array 
 * @n: the number to extract from the array
 * @a: var to holde the pointer to tha array
 * Return: nothing void
 */

void print_array(int *a, int n)
{
	itn i;

	for (i = 0; i < n; i++)
	{
		_putchar(*a + '0');
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
