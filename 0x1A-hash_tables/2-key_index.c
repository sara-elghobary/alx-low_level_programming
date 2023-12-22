#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key to find the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Use the djb2 hash function to calculate the hash value */
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}
