#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name based on a function in the second param
 * @name: pointer to the string to print
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
