#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function to copy a string in a  new bloc of memory
 * @str: pointer to the string to copy
 * Return: pointer to the copy
 */
char *_strdup(char *str)
{
	int i = 0;

	int len = 0;

	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
		len++;
	}
	len++;
	p = (char *)malloc(len * sizeof(char));
	i = 0;
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	return (p);

}
