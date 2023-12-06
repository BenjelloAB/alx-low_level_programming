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
	hash_node_t *hd = NULL, *curr = NULL, *temp = NULL;

	if (!key || !value)
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
			hd->next = curr->next;
			ht->array[index] = hd;
			curr->next = NULL;
			free_node(curr);
			return (1);
		}
		while (curr->next)
		{
			if (strcmp(curr->next->key, hd->key) == 0)
			{
				temp = curr->next;
				curr->next = hd;
				hd->next = temp->next;
				temp->next = NULL;
				free_node(temp);
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
	hd->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (hd->value == NULL)
		return (NULL);
	strcpy(hd->value, value);
	hd->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (hd->key == NULL)
		return (NULL);
	strcpy(hd->key, key);
	return (hd);
}
/**
 * free_node - function that frees the node from the memory
 * @node: pointer to the node
 * Return: Nothing
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
