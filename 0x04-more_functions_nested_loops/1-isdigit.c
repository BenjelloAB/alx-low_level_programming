#include "main.h"

/**
 * _isdigit - Checks if c is a digit or not
 * @c: var to hold the char
 * Return: digit-> 1 !digit -> 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}
