#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - functiothat searches for an integer
 * @array: pointer to access the array hodling ints
 * @size: size of the array passed as 1st arg
 * @cmp: pointer to the function that do the comparaison and checking
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
				return (i);
		i++;
	}
	return (-1);
}
