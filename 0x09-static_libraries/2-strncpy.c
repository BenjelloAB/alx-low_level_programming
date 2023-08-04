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
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
