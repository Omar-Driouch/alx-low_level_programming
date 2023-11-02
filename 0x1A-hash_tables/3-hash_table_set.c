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
	unsigned char *unsigned_key;
	long int index;
	hash_node_t *entry;
	char *duplicated_value;
	(void)value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	unsigned_key = (unsigned char *)key;
	index = key_index(unsigned_key, ht->size);
	duplicated_value =  strdup(value);

	/*creating new entry*/
	entry = malloc(sizeof(hash_node_t));
	entry->value = malloc(strlen(value) + 1);

	entry->key = malloc(strlen(key) + 1);
	strcpy(entry->value, duplicated_value);
	strcpy(entry->key, key);

	/*inserting to the hash table */
	entry->next = ht->array[index];
	ht->array[index] = entry;
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
