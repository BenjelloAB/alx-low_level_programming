#include "main.h"

/**
 * _strspn - calculates the number of bytes depending on other str
 * @s: pointer to the initial string
 * @accept: pointer to the target string
 * Return: int uns , a number
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j = 0;

	int count = 1;

	while (accept[i])
	{
	while (s[j])
	{
		if (accept[i] == s[j])
		{
			count++;
			break;
		}
		if (!accept[i])
			break;
		j++;

	}
	j = 0;
	i++;
	}
	return (count);
}
