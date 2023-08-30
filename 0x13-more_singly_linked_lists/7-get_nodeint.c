#include "lists.h"

/**
 * get_nodeint_at_index - return the node at an index
 * @head: pointer to the list
 * @index: index of the node to return its element
 * Return: pointer to listint_t struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t;

	if (head == NULL)
		return (NULL);
	t = head;
	while (index != 0)
	{
		if (t != NULL)
			t = t->next;
		else 
			return (NULL);
		index--;
	}
	return (t);
}

