#include "main.h"

/**
 * rev_string - reverse a string
 * @s: var to capture the pointer to the string
 * Return: void nothing
 */

void rev_string(char *s)
{
	int i, j;
	char *r;

	i = 0;
	while (*s != '\0')
	{
	
		_putchar(*s);
		i++;
		s++;
	}
	_putchar('\n');
	s--;
	r = s;
	for (j = 0; j < i; j++)
	{
		_putchar(*r);
		r--;
	}
	_putchar('\n');

}
