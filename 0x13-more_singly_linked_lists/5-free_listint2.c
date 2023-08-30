#include "lists.h"

/**
 * free_listint2 - frees the whole list of nodes
 * @head: pointer ot list
 * Return: void
 */
void free_listint2(listint_t **head)
{

	listint_t *next;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
