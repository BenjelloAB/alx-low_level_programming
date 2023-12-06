#include "hash_tables.h"
void free_list(hash_node_t *lst);
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table you want to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		free_list(node);
	}
	free(ht->array);
	free(ht), ht = NULL;
}


/**
 * free_list - frees a hash_node_t list
 * @lst: head of linked list
 */
void free_list(hash_node_t *lst)
{
	hash_node_t *curr;
	hash_node_t *next;

	curr = lst;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = next;
	}
}
