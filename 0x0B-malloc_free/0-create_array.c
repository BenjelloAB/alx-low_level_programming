#include "main.h"

/**
 * create_array - returns a pointer to an array of chars
 * @size: hodls the size of the array
 * @c: char hodling the first element of the array of chars
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	p = (char *)malloc(size * sizeof(char));
	p[0] = c;
	return (p);
}
