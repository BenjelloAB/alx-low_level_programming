#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: the delimiter for the range
 * Return: n to 98
 */

void print_to_98(int n)
{
	if ( n <= 98)
	{
		for(i = n; i <= 98; i++)
		{
			if (i > n)
				_putchar(' ');
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			if (i < 98)
				_putchar(' ');
		}
	}
	else
	{
		for(i = n;i >= 98; i--)
		{
			if(i > n)
				_putchar(' ');
			if (i > 9)
				_putchar((i /10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			if( i > 98)
				_putchar(' ');
		}
	}
}
