#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @n: data to be filled inside the node added
 * @head: pointer to a pointer to the head of a dlist
 * Return: a pointer to the dlist
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	int k = n;

	if (!new_node)
		return (NULL);
	new_node->n = k;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
