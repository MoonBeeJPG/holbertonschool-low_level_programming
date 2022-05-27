#include "hash_tables.h"
/**
* hash_table_create - A function that creates a hash table
*
* @size: Size of the array
*
* Return: A pointer to the newly created hash table, if something
* went wrong, should return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->array = malloc(sizeof(hash_table_t *) * size);

	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;

	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;
	return (new_table);
}
