#include "main.h"

/*
 * _memset - fills memory with a constant for n bytes
 * @s: pointer to the memory area to be filled
 * @b: hodls the constant byte
 * @n: holds the number of bytes to be filled 
 * Return: a char pointer 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
