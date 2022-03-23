#include "lists.h"
/**
* insert_nodeint_at_index - a function that inserts a new node at a given
* position
* @head: Header of the nodes
* @idx: is the index of the list where the new node should be added and
* starts at 0
* @n: Data of the new node
* Return: NULL if it is no possible to add the new node at idx
*
* Auth: MoonBeeJPG
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;

	current = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}

	while (idx > 1)
	{
		current = current->next;
		idx--;

		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
