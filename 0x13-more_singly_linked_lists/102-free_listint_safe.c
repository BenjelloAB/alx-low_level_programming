#include "lists.h"

size_t listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t
 * Return: size_t
 */
size_t listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t no = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				no++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				no++;
				t = t->next;
			}

			return (no);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes_num, index;

	nodes_num = listint_count(*h);

	if (nodes_num == 0)
	{
		for (; h != NULL && *h != NULL; nodes_num++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes_num; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes_num);
}
