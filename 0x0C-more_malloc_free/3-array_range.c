#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min number in the array
 * @max: maximum number in the array
 * Return: a pointer to an array of integers
 */
int *array_range(int min, int max)
{
	int j = 0, i;

	int *a;

	if (min > max)
		return (NULL);
	a = (int *)malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		a[j++] = i;
		i++;
	}
	return (a);
}
