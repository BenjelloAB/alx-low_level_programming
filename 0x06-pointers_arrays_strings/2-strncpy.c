#include "main.h"

/**
 * _strncpy - dest string  concatenated with n bytes from src string
 * @dest: pointer holding first string to concat with
 * @src: pointer holding the string to concat upon
 * @n: number of bytes to take from src string
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest;

	int i = 0;

	int k = n;

	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	if (len < n)
		*dest = '\0';
	return (dest);
}
