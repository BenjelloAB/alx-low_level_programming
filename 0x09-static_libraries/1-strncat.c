#include "main.h"

/**
 * _strncat - dest string is concatenated with n bytes from src string
 * @dest: pointer holding first string to concat with
 * @src: pointer holding the string to concat upon
 * @n: number of bytes to take from src string
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;

	while (*dest)
	{
		dest++;
	}
	while (n > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	dest = str;
	return (dest);
}
