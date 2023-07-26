#include "main.h"

/**
 * puts_half - prints the second half of a string with pointers
 * @str: pointer holding the string
 * Return: Nothing void
 */

void puts_half(char *str)
{
	int n, len = 0;

	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	len--;
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	str += n;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
