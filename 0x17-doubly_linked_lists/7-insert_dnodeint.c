#include "lists.h"
/**
* insert_dnodeint_at_index - A function that inserts a new node
* at a given position
*
* @h: Header of the doubly linked list
* @idx: Index of the list where the new node should be added,
* it starts at 0
* @n: Data of the new node
*
* Return: The adress of the new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);
	
	if (!idx)
		return (NULL);

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;

		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
