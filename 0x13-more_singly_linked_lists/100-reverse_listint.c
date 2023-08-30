#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head: A pointer to the address of the head of the list_t list
 * Return: A pointer to istint_T
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behi;

	if (head == NULL || *head == NULL)
		return (NULL);

	behi = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behi;
		behi = *head;
		*head = ahead;
	}

	(*head)->next = behi;

	return (*head);
}
