#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: pointer to a key
 * @size: size of hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
