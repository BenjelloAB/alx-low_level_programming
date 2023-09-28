#include "main.h"


/**
 * pow_c - memic the pow method
 * @p: integer base
 * @n: integer exp
 * Return: unsigned int
 */
unsigned int pow_c(int n, int p)
{
	int i = 0, pr = 1;

	for (i = 0; i < p; i++)
		pr *= n;
	return (pr);
}

/**
 * binary_to_uint - transform a binary to an integer
 * @b: pointer to the string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0, k, j;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (b[i++])
		len++;
	k = len - 1;
	i = 0;
	while (b[i])
	{
		if (b[i] == '1')
			res += pow_c(2, k);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
		k--;
	}
	return (res);
}
