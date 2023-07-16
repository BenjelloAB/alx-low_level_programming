#include <stdio.h>
#include <stdlib.h>

/**
 *main - printong hexa nums in lower case
 *Return: 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
