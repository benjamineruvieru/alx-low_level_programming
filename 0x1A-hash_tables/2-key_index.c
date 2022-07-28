#include "hash_tables.h"

/**
 * key_index - a funciton that returns the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
