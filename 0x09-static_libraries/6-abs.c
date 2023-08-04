#include "main.h"
/**
 * _abs - to make ever negative number positive
 * @n: var to hold the number
 * Return: positive(n) nagative(-n)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
