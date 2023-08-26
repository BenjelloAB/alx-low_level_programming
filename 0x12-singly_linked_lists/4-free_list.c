#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free the list
 * @head: pointer to the lsit
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

