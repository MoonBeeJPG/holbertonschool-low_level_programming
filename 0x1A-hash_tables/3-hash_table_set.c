#include "hash_tables.h"
/**
* hash_table_set - A function that adds an element to the hash table
* @ht: The hash table we want to add or update the key/value
* @key: The key, that can not be an empty string
* @value: The value associated with the key, must be duplicated and can be
* Return: 1 if it succeeded or 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *new_value;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			break;
		ht->array[index] = ht->array[index]->next;
	}
	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
		{
			free(new_node);
			return (0);
		}
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	free(ht->array[index]->value);
	ht->array[index]->value = new_value;

	return (1);
}