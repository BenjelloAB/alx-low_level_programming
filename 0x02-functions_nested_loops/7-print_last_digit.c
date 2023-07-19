#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the var to hodl the digit
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = -n % 10;
		_putchar(k + '0');
		return (k);
	}
	else
	{
		k = n % 10;
		_putchar('0' + k);
		return (n % 10);
	}
}
