#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to hash table data structure
 * Return: void 
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, aux_size;
	hash_node_t *tmp, *aux;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	aux_size = ht->size;
	for (i = 0; i < aux->size; i++)
	{
		tmp = ht->array[i];
		while ((aux = tmp))
		{
			tmp = tmp->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}

	free(ht->array);
	free(ht);
}
