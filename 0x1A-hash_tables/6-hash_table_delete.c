#include "hash_tables.h"
/**
* hash_table_delete - A function that deletes a hash table
*
* @ht: The hash table
*
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next_node;
	unsigned int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (current = ht->array[index]; current != NULL; current = next_node)
		{
			next_node = current->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
