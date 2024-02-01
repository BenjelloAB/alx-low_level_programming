#include "hash_tables.h"

/**
 *hash_table_get - searches for the value of the provided key
 * @ht: pointer to the table
 * @key: key to search for
 * Return: character
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr = NULL;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
