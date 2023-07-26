#include "main.h"

/**
 * rev_string - reverse a string
 * @s: var to capture the pointer to the string
 * Return: void nothing
 */

void rev_string(char *s)
{
	char t;

	char *r = s;

	while (*r != '\0')
	{
		r++;
	}
	r--;
	while (s < r)
	{
		t = *r;
		*r = *s;
		*s = t;
		r--;
		s++;
	}

}
