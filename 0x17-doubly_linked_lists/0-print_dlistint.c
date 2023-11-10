#include "lists.h"

/**
 * print_dlistint - prints data section of nodes
 * @h: pointer to the head of the dlist
 * Return: size_t the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t s = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		s++;
	}
	return (s);
}
