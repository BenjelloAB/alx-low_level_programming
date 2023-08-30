#include "lists.h"

/**
 * free_listint - frees the whole list of nodes
 * @head: pointer ot list
 * Return: void
 */
void free_listint(listint_t *head)
{

	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
