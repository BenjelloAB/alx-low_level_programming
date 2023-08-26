#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function to get the length of a list
 * @h: pointer to the list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *t = h;

	int i = 0;

	if (t == NULL)
		return (0);

	while (t != NULL)
	{
		t = t->next;
		i++;
	}
	return (i);
}
