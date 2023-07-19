#include "main.h"
/**
 * print_sign - check the sign of a number
 * @n: holds the number passed in the argument
 * Return: positive(1 +) negative(0 -)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
