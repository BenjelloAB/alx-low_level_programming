#include "main.h"

/**
* print_triangle - prints the size * row and size*col of # as triangle
* @size: capture the size of the traigle
* Return: void
*/

void print_triangle(int size)
{
	int i, j;
	if (size > 0)
	{       	
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	if (j <= (size - i))
	_putchar(' ');
	else
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
