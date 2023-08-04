#include "main.h"

/**
 * _memcpy - copies elements from a buffer to another
 * @dest: holds the poiter to the destination buffer to copy to
 * @src: holds the pointer to the src buffer to copy from
 * @n: number of bytes to copy
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);

}
