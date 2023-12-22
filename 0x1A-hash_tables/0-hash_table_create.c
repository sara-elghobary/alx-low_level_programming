#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate memory for the hash table structure */
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	/* Check if memory allocation was successful */
	if (table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	table->size = size;

	/* Allocate memory for the array of pointers and initialize to NULL */
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	/* Check if memory allocation was successful */
	if (table->array == NULL)
	{
		free(table); /* Free previously allocated memory */
		return (NULL);
	}

	/* Initialize each element in the array to NULL */
	for (unsigned long int i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
