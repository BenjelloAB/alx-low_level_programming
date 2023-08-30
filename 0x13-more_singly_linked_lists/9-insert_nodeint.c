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

	listint_t *k, *copy = *head;
	unsigned int i;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);

	k->n = n;

	if (idx == 0)
	{
		k->next = copy;
		*head = k;
		return (k);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	k->next = copy->next;
	copy->next = k;

	return (k);
}
