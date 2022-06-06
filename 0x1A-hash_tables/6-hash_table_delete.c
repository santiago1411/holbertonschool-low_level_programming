#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx = 0;
	hash_node_t *temp = NULL;

	while (idx < ht->size)
	{
		while (ht->array[idx])
		{
			temp = ht->array[idx]->next;
			free(ht->array[idx]->value);
			free(ht->array[idx]->key);
			free(ht->array[idx]);
			ht->array[idx] = temp;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
