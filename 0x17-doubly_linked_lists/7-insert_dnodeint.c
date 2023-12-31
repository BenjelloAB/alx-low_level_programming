#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at given index
 * @idx: index to insert at
 * @n : data to fill in the node with
 * @h: pointer to a pointer to the header of the dlist
 * Return: pointer to the node inserted
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *new_node = NULL;
	unsigned int s = 0, i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (t)
	{
		t = t->next;
		s++;
	}
	if (*h == NULL || idx > s)
		return (NULL);
	if (idx == s)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	t = *h;
	while (i < idx)
	{
		t = t->next;
		i++;
	}
	new_node->prev = t->prev;
	new_node->next = t;
	t->prev->next = new_node;
	t->prev = new_node;
	return (new_node);
}
