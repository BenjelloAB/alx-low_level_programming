#include "main.h"

/**
 * _strchr - returns the pointer to the first occurrence of char c
 * @s: holds the pointer to the string
 * @c: the char to look for
 * Return: a pointer of type char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
