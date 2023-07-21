#include "main.h"

/**
 * _isupper - checks if a char is upper or not
 * @c: var to hold the character
 * Return: upper->1 lower->0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
