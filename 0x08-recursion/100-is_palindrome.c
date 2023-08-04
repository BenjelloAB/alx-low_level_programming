#include "main.h"

/**
 * rec_palindrome_2 - checks if a string is palindrome
 * @s: pointer to the string
 * @i: integer
 * @len: length of the string
 * Return: int
 */
int rec_palindrome_2(char *s, int i, int len)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - 1 - i])
		return (0);
	return (rec_palindrome_2(s, i + 1, len));
}
/**
 * rec_palindrome - checks if a stirng is palindrome or not
 * @s: integer
 * @i: integer
 * @len: integer
 * Return: int
 */
int rec_palindrome(char *s, int i, int len)
{
	if (s[i] == '\0')
		return (rec_palindrome_2(s, 0, len));
	return (rec_palindrome(s, i + 1, len + 1));
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

	return (rec_palindrome(s, i, len));
}
