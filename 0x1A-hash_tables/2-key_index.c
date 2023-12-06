#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key of the hash item
 * @size: the size of the hash table array
 * Return: an index where to insert the the key/value hash node
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_value;

	hashed_value = hash_djb2(key);
	return (hashed_value % size);
}
