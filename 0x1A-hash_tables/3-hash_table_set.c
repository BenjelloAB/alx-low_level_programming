#include "hash_tables.h"

/**
 * hash_table_set - insert a hash node into the hash table
 * @key: key of the hash node
 * @value: value of the hash node
 * @ht: pointer to the hash table
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hd = NULL, *curr = NULL;

	if (!key || !value)
		return (0);
	hd = malloc(sizeof(hash_node_t));
	if (!hd)
		return (0);
	hd->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (hd->value == NULL)
		return (0);
	strcpy(hd->value, value);
	hd->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (hd->key == NULL)
		return (0);
	strcpy(hd->key, key);
	index = key_index((const unsigned char *)hd->key, ht->size);
	curr = ht->array[index];
	if (curr == NULL)
		ht->array[index] = hd;
	else
	{
		hd->next = ht->array[index];
		ht->array[index] = hd;
	}
	return (1);
}
