#include "lists.h"
/**
* free_dlistint - A function that frees a dlistint_t list
*
* @head: Header of the double linked list
*
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
