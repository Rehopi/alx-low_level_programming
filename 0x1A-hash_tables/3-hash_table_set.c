#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash_table_t pointer input
 * @key: const char pointer input
 * @value: const char pointer input
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *new_node;

	if (!key || !value || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
