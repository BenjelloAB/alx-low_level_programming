#include "main.h"

/**
	* cap_string - caps a letter after certain criteria
	* @n: pointer that points to the string
	* Return: char
	*/
char *cap_string(char *n)
{
	int i = 0;

	char *ptr = n;

	while (n[i] != '\0')
	{
	if (n[i] == ',' ||
	n[i] == ';' ||
	n[i] == '!' ||
	n[i] == '?' ||
	n[i] == '"' ||
	n[i] == '(' ||
	n[i] == ')' ||
	n[i] == '{' ||
	n[i] == '}' ||
	n[i] == ' ' ||
	n[i] == '\n' ||
	n[i] == '\t' ||
	n[i] == '.')
	{
	if (n[i + 1] == '\0')
	break;
	if (n[i + 1] >= 97 && n[i + 1] <= 122)
	n[i + 1] -= 32;
	}
	i++;
	}
	return (ptr);
};
