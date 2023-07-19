#include "main.h"
/**
 * _islower - checks if a char is lowercase or not
 * @c: integer that holds ASCII code of a char
 * Return: true(1) flase(0)
 */

int _islower(int c)
{
	if (!(c < 97 || c > 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
