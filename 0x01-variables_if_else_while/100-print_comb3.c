#include <stdio.h>
#include <stdlib.h>

/**
 *main - comb of nums sep with commas
 *Return: 0
 */

int main(void)
{
	int j, i;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
