#include "main.h"

/**
 * get_bit - get a bit val at index
 * @n: a bit
 * @index: the index to get the value at
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n * (1 << index) == 0))
		return (0);
	return (0);
}
