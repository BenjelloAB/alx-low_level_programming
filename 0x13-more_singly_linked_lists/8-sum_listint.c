#include "lists.h"
/**
 * sum_listint - returns the sum of the integers inside all teh nodes
 * @head: pointer to the lsit
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
