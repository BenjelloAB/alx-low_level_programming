#include <stdio.h>

/**
 * main - program to print the name of the file it was compiled from
 * @argc: number of args passed
 * @argv: List of args passed
 * Return: int
 */
int main(int argc, char const *argv[])
{
	printf("%s\n", __FILE__);
	return (0);
}
