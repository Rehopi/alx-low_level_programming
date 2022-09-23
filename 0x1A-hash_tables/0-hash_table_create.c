#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to a struct of type hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size == 0)
		return NULL;
	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht->array);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
