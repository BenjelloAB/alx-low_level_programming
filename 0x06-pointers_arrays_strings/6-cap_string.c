#include "main.h"

/**
	* cap_string - caps a letter after certain criteria
	* @n: pointer that points to the string
	* Return: char
	*/
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{

	while (!(n[i] >= 97 && n[i] <= 122))
		i++;
	if (n[i] == ',' ||
	n[i - 1] == ';' ||
	n[i - 1] == '!' ||
	n[i - 1] == '?' ||
	n[i - 1] == '"' ||
	n[i - 1] == '(' ||
	n[i - 1] == ')' ||
	n[i - 1] == '{' ||
	n[i - 1] == '}' ||
	n[i - 1] == ' ' ||
	n[i - 1] == '\n' ||
	n[i - 1] == '\t' ||
	n[i - 1] == '.')
		n[i] -= 32;
	i++;
	}
	return (n);
};
