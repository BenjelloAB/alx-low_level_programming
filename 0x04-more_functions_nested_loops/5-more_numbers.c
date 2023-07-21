#include "main.h"

/**
 * more_numbers - print 0 -> 14 with _putchar
 * Return: void
 */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i > 9)
			putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		}	
		putchar('\n');
	}
}

