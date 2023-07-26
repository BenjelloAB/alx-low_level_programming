#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: capture the pointer that should pint to src string
 * @src: capture the string that should be pointed by dest pointer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return NULL;

	char *dest2 = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return dest2;


	return (dest);
}
