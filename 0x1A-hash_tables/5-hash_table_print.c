#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int com = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (com)
			printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (com == 0)
				com = 1;
		}
	}
	printf("}\n");
}
