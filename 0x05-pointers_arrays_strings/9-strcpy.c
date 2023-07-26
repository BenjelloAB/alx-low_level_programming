#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: capture the pointer that should pint to src string
 * @src: capture the string that should be pointed by dest pointer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
