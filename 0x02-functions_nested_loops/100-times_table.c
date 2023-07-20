#include "main.h"
/**
 * prrint_times_table - prints the n's times table
 * @n: holds the times table limit
 * Return: times table of n
 */

void print_times_table(int n)
{
	int i, j , res;
	if (n >= 0 && n < 15)


	{
		for(i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++ )
			{
				res = i * j;
				if (res > 99)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
				}
				if (res > 9 && res < 100)
				{
					_putchar((res / 10) + '0');
				}
				else if (j != 0 && res < 100)
				{
					_putchar(' ');
				}
				_putchar((res % 10) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
		

}
