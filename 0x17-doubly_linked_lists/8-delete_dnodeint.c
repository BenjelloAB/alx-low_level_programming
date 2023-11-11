#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @index: index of node to delete
 * @head: pointer to th pointer to the head of the dlist
 * Return: integer 1 succ -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = NULL;
	unsigned int s = 0, i = 0;

	if (*head == NULL)
		return (-1);
	t = *head;
	while (t)
	{
		t = t->next;
		s++;
	}
	if (index >= s)
		return (-1);
	t = *head;
	while (i < index)
	{
		t = t->next;
		i++;
	}
	if (t->prev)
		t->prev->next = t->next;
	else
		*head = t->next;

	if (t->next)
		t->next->prev = t->prev;
	free(t), t = NULL;
	return (1);
}
