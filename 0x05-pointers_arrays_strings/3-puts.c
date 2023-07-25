#include "main.h"

/**
 * _puts - print a string followed by a newline
 * @str: pointer that points to a string
 * Return: void nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
