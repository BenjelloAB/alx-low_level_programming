#include "main.h"

/**
	* _strstr - finds the first occurrence of the substring in the haystack string
	* @needle: pointer to the substring
	* @haystack: pointer to the initial string
	* Return: pointer of type char
	*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}
	return ('\0');
}
