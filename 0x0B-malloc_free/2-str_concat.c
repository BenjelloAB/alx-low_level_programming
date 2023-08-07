#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate twon strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return : pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len, len1 = 0, len2 = 0;

	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i])
		{
			len1++;
			i++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i])
		{
			len2++;
			i++;
		}
	}
	len = len1 + len2;
	i = 0;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		p[i] = s2[i];
		i++;
	}
	i++;
	p[i] = '\0';
	return (NULL);
}
