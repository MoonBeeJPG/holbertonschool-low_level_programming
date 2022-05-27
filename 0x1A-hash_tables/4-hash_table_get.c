#include "hash_tables.h"
/**
* hash_table_get - A function that retrieves a value associated with a key
*
* @ht: The hash table we want to look into
* @key: The key we are looking for
*
* Return: The value associated with the element, or NULL if key couldn't
* be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (0);

	index = hash_djb2((const unsigned char *) key);
	index %= ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (0);
}
