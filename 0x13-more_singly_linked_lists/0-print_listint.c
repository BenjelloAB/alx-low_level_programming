#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: pointer to the lsit
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *t;

	size_t len = 0;

	t = h;
	if (h == NULL)
		return (0);
	while (t != NULL)
	{
		t = t->next;
		len++;
	}
	return (len);
}
