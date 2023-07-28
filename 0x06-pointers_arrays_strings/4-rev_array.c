#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: pointer to the array
 * @n: size of the array
 * Return: Void nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int temp;

	while (i < n / 2)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
		i++;
	}
}
