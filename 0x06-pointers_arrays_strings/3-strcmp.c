#include "main.h"

/**
 * _strcmp - function to compare strings
 * @s1: pointer that points to the first string
 * @s2: pointer that points to the second string
 * Return: (-) s1 < s2 (+) s1 > s2 (0) s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
