#include "main.h"

/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: number to claculates its power of y
 * @y: number of time x should multipilid by itself
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
