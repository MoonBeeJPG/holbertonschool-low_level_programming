#include "lists.h"
/**
* free_listint - a function that frees a listint_t list
* @head: Header of the nodes
*/
void free_listint(listint_t *head)
{
	listint_t *current, *nextnode;

	current = head;
	while (current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
}
