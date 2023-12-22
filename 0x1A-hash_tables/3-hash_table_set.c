#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key to add or update.
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Check if the hash table, key, and value are not NULL */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Calculate the index using the key_index function */
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	/* Create a new hash node for the key/value pair */
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	/* Check if memory allocation was successful */
	if (new_node == NULL)
		return (0);

	/* Duplicate the key and value strings */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Check if strdup was successful for both key and value */
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
