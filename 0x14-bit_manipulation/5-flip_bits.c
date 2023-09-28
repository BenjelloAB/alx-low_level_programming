#include "main.h"
/**
 * flip_bits - Counts and flipp
 * @m: an integer
 * @n: an integer to flip to
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or_x = n ^ m, bits = 0;

	while (or_x > 0)
	{
		bits += (or_x & 1);
		or_x >>= 1;
	}
	return (bits);
}
