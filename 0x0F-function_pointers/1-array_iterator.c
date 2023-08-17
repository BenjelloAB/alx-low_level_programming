#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - performs a function on each element of a given array
 * @array: pointer to access the array
 * @size: size of the array
 * @action: pointer to a function to execute on each element of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
