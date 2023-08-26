#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a node at beg of a list
 * @head: pinter to ponter of list_t staruct type
 * @str: pointer to string
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t = NULL;

	list_t *p = NULL;

	unsigned int len = 0, i = 0;

	t = (list_t *)malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
		len++;
	}
	t->len = len;
	t->str = strdup(str);
	if (*head == NULL)
	{
		*head = t;
		t->next = NULL;
		return (*head);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = t;
	t->next = NULL;
	return (*head);
}
