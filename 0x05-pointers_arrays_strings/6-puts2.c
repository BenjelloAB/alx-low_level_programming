#include "main.h"

/**
 * puts2 - printf every other character of a string
 * @str: var to capture the pointer pointing to the string
 * Return: void nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
