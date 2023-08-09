#include <stdlib.h>
#include "main.h"

/**
	* strtow - function that split a string into words
	* @str: pointer to the string
	* Return: pointer to pointer
	*/
char **strtow(char *str)
{
	int i = 0, j = 0, z = 0, len = 0, nW = 0;

	char *watcher, **stk;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	while (str[i] != '\0')
	{
	if (str[i] == ' ')
	{
	i++;
	}
	else
	{
	while (str[i] != ' ' && str[i] != '\0')
	{
	i++;
	}
	nW++;
	}
	}
	if (nW == 0)
	{
	return (NULL);
	}
	stk = (char **)malloc(sizeof(char *) * (nW + 1));
	if (stk == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (*str != '\0')
	{
	if (*str == ' ')
	{
	str++;
	}
	else
	{
	watcher = str;
	while (*str != '\0' && *str != ' ')
	{
	len++;
	str++;
	}
	stk[i] = (char *)malloc(sizeof(char) * (len + 1));
	if (stk[i] == NULL)
	{
	while (i > 0)
	{
	free(stk[i]);
	i--;
	}
	free(stk);
	return (NULL);
	}
	z = 0;
	while (*watcher != '\0' && *watcher != ' ')
	{
	stk[i][z] = *watcher;
	watcher++;
	z++;
	}
	stk[i][z] = '\0';
	len = 0;
	z = 0;
	i++;
	while (*str != ' ' && *str != '\0')
	{
	str++;
	}
	}
	}
	stk[nW] = NULL;
	return (stk);
}
