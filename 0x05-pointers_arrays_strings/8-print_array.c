#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element from the array
 * @n: the number to extract from the array
 * @a: var to holde the pointer to tha array
 * Return: nothing void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *a);
		else
			printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
