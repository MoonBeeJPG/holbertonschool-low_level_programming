#include "lists.h"
/**
* delete_dnodeint_at_index - A function that deletes the node at index
* of a dlistint_t
*
* @head: Header of the doubly linked list
* @index: Index of the node that should be deleted, it starts at 0
*
* Return: 1 if it succeeded, -1 if it failed

*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (current == NULL)
		return (-1);
	while (current != NULL)
	{
		if (count == index)
		{
			free (current);
			return (1);
		}
		count++;
		current = current->next;
	}
	free (current)
	return (1);
}
