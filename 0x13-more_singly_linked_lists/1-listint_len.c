#include "lists.h"

/**
 * listint_len - returns length of a list
 * @h: pointer to the list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	const listint_t *t = h;

	if (h == NULL)
		return (0);
	while (t != NULL)
	{
		len++;
		t = t->next;
	}
	return (len);
}
