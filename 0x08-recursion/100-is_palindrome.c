#include "main.h"

/**
 * rec_palindrome - checks if a string is palindrome
 * @s: pointer to the string
 * @i: integer
 * @len: length of the string
 * Return: int
 */
int rec_palindrome(char *s, int i, int len)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - 1 - i])
		return (0);
	return (rec_palindrome(s, i + 1, len));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to the string to check
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	return (rec_palindrome(s, 0, len));
}
