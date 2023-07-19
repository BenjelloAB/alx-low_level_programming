#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times with _putchar
 * Return: 10 lines of alphabets
 */

void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
