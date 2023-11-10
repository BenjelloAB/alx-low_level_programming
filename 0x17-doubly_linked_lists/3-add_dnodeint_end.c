#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlist
 * @n: data to add in new node
 * @head: pointer to the pointer to the head of the dlist
 * Return: a pointer to the creatred node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	if (new_node == NULL)
		return (NULL);	
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while(temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
