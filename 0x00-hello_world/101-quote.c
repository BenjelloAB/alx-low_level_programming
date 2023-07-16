#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - err stream
 *Return: 1
 */

int main(void)
{
	int len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",len);
	return (1);
}
