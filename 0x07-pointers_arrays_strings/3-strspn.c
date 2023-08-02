#include "main.h"

/**
 * _strspn - calculates the number of bytes depending on other str
 * @s: pointer to the initial string
 * @accept: pointer to the target string
 * Return: int uns , a number
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
