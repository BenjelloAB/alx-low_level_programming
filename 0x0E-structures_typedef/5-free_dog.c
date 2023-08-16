#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - deallocate the dog struct and its members from the Heap
 * @d: pointere to dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d);
	return;
}
