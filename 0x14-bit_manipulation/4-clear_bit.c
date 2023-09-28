#include "main.h"
/**
 * clear_bit - set a bit to 0 in index
 * @index: the index
 * @n: pointer to the integer
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
