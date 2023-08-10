#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check if the size to allocate in mem is available
 * @b: holds the size of the memory to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
