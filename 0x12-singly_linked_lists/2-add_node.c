#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a node at beg of a list
 * @head: pinter to ponter of list_t staruct type
 * @str: pointer to string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t = NULL;

	unsigned int len1 = 0, i = 0;

	char *copy;

	t = (list_t *)malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
		len1++;
	}
	copy = strdup(str);
	t->str = copy;
	t->len = len1;
	t->next = *head;
	*head = t;
	return (*head);
}
