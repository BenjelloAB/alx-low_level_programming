#include <stdlib.h>
#include <stdio.h>

/**
 *main - both lower and upper alphas
 *Descriptin : prints the alphabet in lowercase then upper
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
