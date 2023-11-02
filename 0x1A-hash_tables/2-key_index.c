#include "hash_tables.h"

/**
 * key_index - returns the keyIndex that is possible to store in table
 * @key: the value that we want to store
 * @size: the size of the table
 *
 * Return: index that from 0 to size of the hashtable
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashedkey = hash_djb2(key);

	return (hashedkey % size);
}
