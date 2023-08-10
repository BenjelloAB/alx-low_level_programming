#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for an array
 * @nmemb: number of elements in the array we are allocating memory for
 * @size: size of each element of the array
 * Return: pointer to an address of a block in the Heap
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	return (p);
}
