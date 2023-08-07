#include "main.h"
#include <stdlib.h>

/**
 * create_array - returns a pointer to an array of chars
 * @size: hodls the size of the array
 * @c: char hodling the first element of the array of chars
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (size > 0)
	{
		p[i] = c;
		size--;
		i++;
	}
	return (p);
}
