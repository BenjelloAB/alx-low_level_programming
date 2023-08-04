#include "main.h"

/**
 * f_sqr - checks if a num has a natural square
 * @f: integer
 * @s: integer
 * Return: int
 */
int f_sqr(int f, int s)
{

	if ((s * s) == f)
	{
		return (s);
	}
	if ((s * s) > f)
		return (-1);
	return (f_sqr(f, s + 1));

}
/**
 * _sqrt_recursion - checks if a num has a natural square
 * @n: integer to calcualte its square
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (f_sqr(n, 1));
}
