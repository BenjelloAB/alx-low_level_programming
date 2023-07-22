#include "main.h"

/**
* print_triangle - prints the size * row and size*col of # as triangle
* @size: capture the size of the traigle
* Return: void
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	if (j <= (size - i))
	putchar(' ');
	else
	putchar('#');
	}
	putchar('\n');
	}
}
