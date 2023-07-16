#include <stdio.h>
#include <stdlib.h>

/**
 *main - lowercase alphabet in revers
 *Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
