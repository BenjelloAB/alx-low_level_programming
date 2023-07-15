#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function desc
 *Description : all alpha except e and q
 *Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
