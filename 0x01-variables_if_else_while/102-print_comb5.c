#include <stdio.h>
#include <stdlib.h>

/**
 *main - cobination of two two digits no constraitns
 *Return: 0
 */

int main(void)
{
	int i, j, k, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (z = 1; z <= 9; z++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(z + '0');
					if (!(i == 9 && j == 8 && k == 9 && z == 9))
					{
						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
