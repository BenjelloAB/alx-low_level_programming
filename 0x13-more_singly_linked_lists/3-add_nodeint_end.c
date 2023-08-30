#include "lists.h"
/**
 * add_nodeint_end - add a node a tthe end of the list
 * @head: pointer to a pointer to a list
 * @n: integer to isnert in the data section of the node
 * Return: listint_t pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	listint_t *k;

	if (head == NULL)
		return (NULL);
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = NULL;
	if (*head == NULL)
	{
		*head = k;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = k;
	return (*head);
}
