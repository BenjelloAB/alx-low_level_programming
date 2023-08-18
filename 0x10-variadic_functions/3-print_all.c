#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *string_printer - prints string arguments
 *@arg: the current argument pointed to by arg
 *Return: nothing
 */
void string_printer(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 *char_printer - prints char arguments
 *@arg: the current argument pointed to by arg
 *Return: nothing
 */
void char_printer(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}
/**
 *int_printer - prints inti arguments
 *@arg: the current argument pointed to by arg
 *Return: nothing
 */
void int_printer(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}
/**
 * float_printer - prints float arguments
 * @arg: the current argument pointed to by arg
 *Return: nothign
 */
void float_printer(va_list arg)
{
	float k = va_arg(arg, double);

	printf("%f", k);
}
/**
 * print_all - prints args whatever the type separated with  ,
 * @format: pointer to the string containing the types of the args in order
 * @...: arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;

	printify_t functions[] = {
		{"c", char_printer},
		{"s", string_printer},
		{"i", int_printer},
		{"f", float_printer}
		};

	va_list list_args;

	char *sepa = "";

	va_start(list_args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != *(functions[j].s))
			j++;
		if (j < 4)
		{
			printf("%s", sepa);
			functions[j].print_it(list_args);
			sepa = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(list_args);
}

