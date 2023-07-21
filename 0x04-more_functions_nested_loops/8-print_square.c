#include "main.h"
/**
* print_square - shape a triangle of n rows and n cols
* @size: var to captue size
* Return: void
*/

void print_square(int size);
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
	for (j = 0; j < 5; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
}
