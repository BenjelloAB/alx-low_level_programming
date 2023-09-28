#include "main.h"

/**
 * set_bit - set the value of a bit at a given index
 * @index: the index
 * @n: pointer to integer
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
