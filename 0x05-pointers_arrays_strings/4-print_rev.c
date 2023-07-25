#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: var to capture the string through a pointer
 * Return: nothing
 */

void print_rev(char *s)
{

	char *r;

	int i = 0;

	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	r = s;
	for (j = 0; j < i; j++)
	{
		_putchar(*r);
		r--;
	}
}
