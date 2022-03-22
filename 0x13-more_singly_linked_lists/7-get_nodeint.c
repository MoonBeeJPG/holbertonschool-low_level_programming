#include "lists.h"
/**
* get_nodeint_at_index - a function that returns the
* nth node of a listint_t linked list
* @head: Header of the nodes
* @index: Index of the node
* Return: The nth node of a listint_t linked list, if
* the node does not exist, return NULL
*
* Auth: MoonBeeJPG
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;

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
