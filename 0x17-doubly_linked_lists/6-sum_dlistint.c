#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data inside the dlist
 * @head: pointer to the head of the dlist
 * Return: int the sum 
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
