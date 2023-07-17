#include <stdio.h>
#include <stdlib.h>

/**
 *main - display all comination of two digits with c < b
 *Return: 0
 */

int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 100)
	{
		b = a % 10;
		c = a / 10;
		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');
			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
