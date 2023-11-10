#include "lists.h"

/**
 * dlistint_len - returns the length of a dlist
 * @h: pointer to the header of the list
 * Return: sizeof of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		s++;
		temp = temp->next;
	}
	return (s);
}
