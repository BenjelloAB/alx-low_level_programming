#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all the arguments
 * @ac: number of arguments passed
 * @av: pointer to pointers to arguments passed
 * Return: pointer to char
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, z = 0, len = 0;

	char *k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
	}
	len++;
	k = (char *)malloc(sizeof(char) * len);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			k[z] = av[i][j];
			j++;
			z++;
		}
		k[z++] = '\n';
	}
	k[z] = '\0';
	return (k);
}
