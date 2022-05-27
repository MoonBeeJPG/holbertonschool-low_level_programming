#include "hash_tables.h"
#include <stdio.h>
/**
* hash_table_print - A function that prints a hash table
*
* @ht: The hash table
*
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int one = 1;

	if (ht == NULL)
		return;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		for (current = ht->array[index]; current != NULL;
				current = current->next)
		{
			if (one)
			{
				printf("'%s': '%s'", current->key, current->value);
				one = 0;
			}
			else
				printf(", '%s': '%s'", current->key, current->value);
		}
	}
	printf("}\n");
}
