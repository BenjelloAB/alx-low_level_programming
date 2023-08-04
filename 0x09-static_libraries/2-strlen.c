#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: capture the string value through pointers
 * Return: number of chars -> length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
