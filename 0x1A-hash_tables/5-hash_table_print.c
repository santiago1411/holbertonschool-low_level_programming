#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int idx = 0;
	hash_node_t *current = NULL;

	if (!ht)
		return;

	printf("{");
	while (idx < ht->size)
	{
		current = ht->array[idx];
		while (current != NULL)
		{
			if (i == 1)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			i = 1;
			current = current->next;
		}
		idx++;
	}
	printf("}\n");
}
