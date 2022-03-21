#include "lists.h"
/**
* add_nodeint_end - a function that adds a new node at the end of a listint_t list
* @head: Header of the nodes
* @n: New node
* Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n1, *next_node;

	n1 = malloc(sizeof(listint_t));

	if (!n1)
		return (NULL);
	
	n1->n = n;
	n1->next = NULL;

	if (*head == NULL)
	{
		*head = n1;
	}
	else
	{
		next_node = *head;
		
		while(next_node->next)
			next_node = next_node->next;
		
		next_node->next = n1;
	}
	return (n1);
}
