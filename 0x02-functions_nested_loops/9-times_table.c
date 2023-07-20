#include "main.h"
/**
 * times_table - prints times table of 9 with _putchar :)
 * Return: times table (9)
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n > 9)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			if (j != 9)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
