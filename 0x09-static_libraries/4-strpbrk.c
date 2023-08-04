#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any byte of accept in s
 * @s: pointer to the initial string
 * @accept: pointer to the string with chars to search for
 * Return: pointer of type char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			if (!accept[i])
				break;
			i++;
		}
		i = 0;
		s++;
	}
	s = 0;
	return (s);
}
