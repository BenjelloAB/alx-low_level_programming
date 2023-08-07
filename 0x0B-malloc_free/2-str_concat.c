le#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate twon strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len, len1 = 0, len2 = 0, j = 0;

	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i++])
		len1++;
	i = 0;
	while (s2[i++])
		len2++;
	len = len1 + len2 + 1;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
		p[j++] = s1[i++];
	i = 0;
	while (s2[i])
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}
