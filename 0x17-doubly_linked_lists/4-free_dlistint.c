#include "lists.h"

/**
 * free_dlistint - frees the entire dlist
 * @head: pointer to the head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	if (head == NULL)
	{
		free(head), head = NULL;
		return;
	}
	while (head)
	{
		t = head;
		head = head->next;
		free(t), t = NULL;
	}
}
