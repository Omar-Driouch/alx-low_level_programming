#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    const unsigned char *keyhashed = (const unsigned char *)key;
    long int index = key_index(keyhashed, ht->size);
    hash_node_t *entry = ht->array[index];

    if (entry == NULL)
    {
        return NULL;
    }
    else
    {
        return entry->value;
    }
}
