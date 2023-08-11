#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
void printError()
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 *
 *
 *
 */
int checkIfNum(const char *s)
{
	int i = 0;

	while (s[i])
	{
		if(!(s[i] >= 48 && s[i] <= 57))
			printError();
		i++;
	}
	return (atoi((const char *)s));
}
/**
 *
 *
 *
 *
 */
int main(int argc, const char *argv[])
{
	int num1, num2, num3;
	if (argc > 3)
		printError();

	num1 = checkIfNum(argv[1]);
	num2 = checkIfNum(argv[2]);
	num3 = num1 * num2;
	printf("%d\n",num3);
	return (0);
	

}
