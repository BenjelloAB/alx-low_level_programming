#include "main.h"
#include <stdlib.h>

/**
 * 
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of chars to slice from the s2 string
 * Return: a pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = 0, len1 = 0, len2 = 0;

	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		len1++;
		i++;
	}
	len1--;
	i = 0;
	while (s2[i])
	{
		len2++;
		i++;
	}
	len2--;
	len = len1 + n + 1;
	p = (char *)malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	n = (int)n;
	if (len2 <= n)
	{
		while (s2[j])
		{
			p[i] = s2[j];
			i++;
			j++;
		}
		p[i] = '\0';
	}
	else
	{
		while (n > 0)
		{
			p[i] = s2[j];
			j++;
			i++;
			n--;
		}
		p[i] = '\0';
	}
	return (p);
}
