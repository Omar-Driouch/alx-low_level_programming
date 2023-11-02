#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * Creates a new hash table with a given size.
 *
 * @size: The size of the hash table to be created.
 * Return: A pointer to the newly created hash table on success,
 * or NULL if memory allocation fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
		return NULL;

	hashTable->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));

	if (hashTable->array == NULL)
	{
		free(hashTable);
		return NULL;
	}

	hashTable->size = size;

	return (hashTable);
}
