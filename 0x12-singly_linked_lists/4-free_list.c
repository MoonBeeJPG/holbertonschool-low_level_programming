#include "lists.h"
/**
* free_list - free the entire list
* @head: actual node
*/
void free_list(list_t *head)
{
	list_t *current, *nextnode;
	
	current = head;
	
	if (current != NULL)
	{
		nextnode = current->next;
		free(current->str);
		free(current);
		current->next = nextnode;
	}
}
