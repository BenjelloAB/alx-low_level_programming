#include <stdio.h>
#include <stdlib.h>

/**
 *main - err stream
 *Return: 1
 */

int main(void)
{
	int len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof(char), len, stderr);
	return (1);
}
