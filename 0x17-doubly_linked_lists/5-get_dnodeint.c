#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the specified index
 * @index: index of the element to returtn
 * @head: pointer to the head of the dlist
 * Return: pointer to dlist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t = NULL;
	unsigned int s = 0, i = 0;

	if (head == NULL)
		return (NULL);
	t = head;
	while (t)
	{
		t = t->next;
		s++;
	}
	if ((s - 1) < index)
		return (NULL);
	t = head;
	while (i < index)
	{
		t = t->next;
		i++;
	}
	return (t);
}
