#include <stdio.h>

/**
 * main - program to print the name of the file it was compiled from
 * Return: int
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
