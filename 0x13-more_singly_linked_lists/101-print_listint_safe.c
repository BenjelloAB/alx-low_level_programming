#include "lists.h"

size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * listint_len - Counts number  uniq nodes
 * @head: A pointer to the head of the listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *t, *h;
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
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the listint_t
 * Return: Tsize_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_num, index = 0;

	nodes_num = listint_len(head);

	if (nodes_num == 0)
	{
		for (; head != NULL; nodes_num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes_num; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes_num);
}
