#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size : the size of the hash table
 * Return: a pointer to the hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **)calloc(ht->size, sizeof(hash_node_t *));
	if (!ht->array)
		return (NULL);
	return (ht);
}
