#include "lists.h"
/**
* get_dnodeint_at_index - A function that returns the nth node
* of a dlistint_t linked list
*
* @head: Header of the doubly linked list
* @index: Index of the node
*
* Return: The nth node of the dlisint_t, if the node doesn't 
* exist, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (current);
}
