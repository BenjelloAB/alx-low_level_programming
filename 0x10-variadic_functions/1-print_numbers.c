#include "varaidic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints args seprated with the seperator string
 * @sepeartor: pointer to the string to use as sep between args
 * @n: number of args passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if(separator != NULL)
			printf("%s",separator);
	}
	printf("\n");
	va_end(args);
}
