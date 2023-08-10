#include "main.h"
#include <stdlib.h>

/**
 * _realloc - clone the behavior of realloc
 * @ptr: pointer to the old bloc
 * @old_size: the old size that was allocate
 * @new_size: the new size to be allocated
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;

	char *a, *b;

	unsigned int min;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size == old_size)
		return (NULL);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	b = ptr;
	min = old_size;
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (min > new_size)
	{
		min = new_size;
	}
	else
	{
		free(ptr);
		return (a);
	}
	while (i <= min)
	{
		a[i] = b[i];
		i++;
	}
	free(ptr);
	return (a);
}
