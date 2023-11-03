#include "hash_tables.h"

/**
 * hash_table_set - Inserts a key-value pair into the hash table.
 *
 * This function inserts a key-value pair into the hash table. Memory is
 * allocated
 * to store the key and value within the hash table entry.
 *
 * @ht: A pointer to the hash table structure.
 * @key: The key to be inserted into the hash table.
 * @value: The value associated with the key.
 *
 * Return:
 *     -  1 if the key-value pair is successfully inserted into the hash table
 *     -  0 if either the key or the hash table pointer is NULL or if memory
 * allocation fails.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];



	/* Check if key already exists */
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}

	/* Key doesn't exist, create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Insert new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * Hash_table_lookup - Looks up a key in the hash table.
 *
 * This function searches for a given key within the hash table.
 *
 * @ht: A pointer to the hash table structure.
 * @key: The key to be searched in the hash table.
 *
 * Return:
 *     -  1 if the key is found in the hash table.
 *     -  0 if the key is not found in the hash table.
 *     - -1 if either the key or the hash table pointer is NULL.
 */

int Hash_table_lookup(hash_table_t *ht, const char *key)
{
	unsigned char *unsigned_key;
	long int index;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL)
	{
		/*  Indicate an error due to NULL inputs */
		return (-1);
	}

	unsigned_key = (unsigned char *)key;
	index = key_index(unsigned_key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		/* Key not found */
		return (0);
	}

	/*  Key found */
	return (1);
}
