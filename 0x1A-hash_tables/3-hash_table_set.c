#include "hash_tables.h"
void free_node(hash_node_t *node);
hash_node_t *create_hash_node(const char *key, const char *value);
/**
 * hash_table_set - insert a hash node into the hash table
 * @key: key of the hash node
 * @value: value of the hash node
 * @ht: pointer to the hash table
 * Return: integer 1:Success 0:Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hd = NULL, *curr = NULL;

	if (!key || !value || !ht)
		return (0);
	hd = create_hash_node(key, value);
	if (!hd)
		return (0);
	index = key_index((const unsigned char *)hd->key, ht->size);
	curr = ht->array[index];
	if (curr == NULL)
		ht->array[index] = hd;
	else
	{
		if (strcmp(curr->key, hd->key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			free_node(hd);
			return (1);
		}
		while (curr)
		{
			if (strcmp(curr->key, hd->key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				free_node(hd);
				return (1);
			}
			curr = curr->next;
		}
		hd->next = ht->array[index];
		ht->array[index] = hd;
	}
	return (1);
}


/**
 * create_hash_node - creates the hash node item in the memory
 * @key: key of the hash node
 * @value: value of the hash node
 * Return: a pointer to the hash node in the memory
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *hd = NULL;

	hd = malloc(sizeof(hash_node_t));
	if (!hd)
		return (NULL);
	hd->key = strdup(key);
	hd->value = strdup(value);
	hd->next = NULL;
	return (hd);
}
/**
 * free_node - frees a node
 * @hd: pointer to the node
 *
 */
void free_node(hash_node_t *hd)
{
	free(hd->key);
	free(hd->value);
	free(hd);
}
