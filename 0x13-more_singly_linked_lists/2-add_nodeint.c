#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to a pointer to the list
 * @n: to fill the data in the node
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	if (head == NULL)
		return (NULL);
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = *head;
	*head = k;
	return (*head);
}
