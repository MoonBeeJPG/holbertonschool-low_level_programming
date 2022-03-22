#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list
* @head: Header of the nodes\
*
* Auth: MoonBeeJPG
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *nextnode;

	if (*head == NULL)
		return;

	current = *head;
	while (current != NULL && head != NULL)
	{
		nextnode = current;
		current = current->next;
		free (nextnode);
	}
	*head = NULL;
}
