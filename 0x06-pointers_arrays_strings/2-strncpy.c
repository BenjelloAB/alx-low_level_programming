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
	int i = 0;

	int len = 0;

	char *str = dest;

	while (dest[i++])
	len++;
	while (n > 0 && *src != '\0')
	{
	*dest = *src;
	n--;
	dest++;
	src++;
	}
	if (n > len)
	{
	dest = &dest[len];
	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}
	}
	return (str);
}

