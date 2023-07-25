#include "main.h"

/**
 * swap_int - swaps two integers' values through pointers
 * @a: var to capture first poiter's value
 * @b: Var to capture second pointer's value
 * Return: void nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
