#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the var to hodl the digit
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}
	else
	{
		return (n % 10);
	}
}
