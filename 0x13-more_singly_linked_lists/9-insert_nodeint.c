#include "lists.h"

/**
 * insert_nodeint_at_index - self explained
 * @head: pointer to pointer to list
 * @idx: index to stop and add node in it
 * @n: number to insert in a node
 * Return: pointer to listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *k, *temp;

	if (*head == NULL || head == NULL)
		return (NULL);
	temp = *head;
	idx--;
	while (idx != 0)
	{
		if (temp != NULL)
			temp = temp->next;
		else
			return (NULL);
		idx--;
	}
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = NULL;
	p = temp->next;
	temp->next = k;
	k->next = p;
	return (*head);
}
