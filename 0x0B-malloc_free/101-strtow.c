#include <stdlib.h>
#include "main.h"

/**
	* strtow - function that split a string into words
	* @str: pointer to the string
	* Return: pointer to pointer
	*/
char **strtow(char *str)
{
	int i, j, z;

	char **stk;

	int len = 0;

	int k[1000];

	i = 0;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	while (str[i])
	{
	if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i - 1] == ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] == '\0'))
	len++;
	i++;
	}
	stk = (char **)malloc(sizeof(char) * len);
	if (stk == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	k[i] = 0;
	i = 0;
	j = 0;
	while (str[j])
	{
	if (str[j] != ' ')
	{
	k[i]++;
	j++;
	}
	if (str[j] == ' ' && str[j + 1] != ' ')
	i++;
	if (str[j] == ' ')
	j++;
	}
	j = 0;

	for (i = 0; i < len; i++)
	{
	stk[i] = (char *)malloc(sizeof(char) * k[i]);
	if (stk[i] == NULL)
	{
	while (i >= 0)
	{
	free(stk[i]);
	i--;
	}
	free(stk);
	}
	z = 0;
	while (str[j])
	{
	if (str[j] != ' ' && str[j + 1] == ' ')
	{
	stk[i][z] = str[j];
	j++;
	z++;
	break;
	}
	if (str[j] != ' ')
	{
	stk[i][z] = str[j];
	}
	if (str[j] == ' ')
	j++;
	j++;
	z++;
	}
	}
	return (stk);
}
