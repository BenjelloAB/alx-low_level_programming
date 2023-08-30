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
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = NULL;
	if (idx == 0)
	{
		k->next = *head;
		*head = k;
		return (k);

	}

	idx--;
	while (idx--)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	p = temp->next;
	temp->next = k;
	k->next = p;
	return (*head);
}
