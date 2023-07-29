#include "main.h"

/**
	* cap_string - caps a letter after certain criteria
	* @n: pointer that points to the string
	* Return: char
	*/
char *cap_string(char *n)
{
	int i, j;

	char s[13]  = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			  '(', ')', '{', '}'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (n[i]  >= 'a' && n[i] <= 'z')
				{
					n[i] = n[i] - 32;
				}
			}
			if (n[i] == s[j])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}
