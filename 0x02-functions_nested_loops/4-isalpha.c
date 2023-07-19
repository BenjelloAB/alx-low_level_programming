#include "main.h"
/**
 * _isalpha - tells if the passed value is a char
 * @c: holds the ASCII value of the passed char
 * Return: true(1) flase(0)
 */
int _isalpha(int c)
{
	if((c >= 97 && c <= 122 ) || (c >= 65 && c <= 90 ))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
