#include "lists.h"

/**
 * pop_listint - remove first node in a lsit
 * @head: pointer to pointer to the list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *next;

	int n;

	if (*head == NULL)
		return (0);
	next = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next;
	return (n);
}
