#include "main.h"

/**
 * _strcat - conact two strings with pointers
 * @src: pointer to the string to concat upon
 * @dest: pointer to the string to concat with
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while(*dest)
	{
		dest++;
	}

	while(*src)
	{	
		*dest =*src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (str);
}
