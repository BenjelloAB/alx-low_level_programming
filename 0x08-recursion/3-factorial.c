#include "main.h"

/**
 * factorial - calculates the fact of n
 * @n: holds the number to calculate its factorial
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
