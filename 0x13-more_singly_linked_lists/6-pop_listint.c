#include "lists.h"

/**
 * pop_listint - remove first node in a lsit
 * @head: pointer to pointer to the list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *next;

	if (*head == NULL)
		return (0);
	next = (*head)->next;
	free(*head);
	*head = next;
	return (1);
}
