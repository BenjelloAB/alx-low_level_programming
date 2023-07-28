#include "main.h"

/**
	* string_toupper - making the string go upper mode
	* @n: pointer to the string
	* Return: char
	*/

char *string_toupper(char *n)
{
	char *str = n;

	while (*n != '\0')
	{
	if (*n >= 97 && *n <= 122)
	{
	*n -= 32;
	}
	n++;
	}
	return (str);
}
