#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print node content and number
 * @h: pointer to the list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	const list_t *t = h;

	int i = 0;

	while(t != NULL)
	{
		if (t->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf ("[%d] %s\n",t->len, t->str);
		t = t->next;
		i++;
	}
	return (i);
}
