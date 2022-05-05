#include "lists.h"
/**
* add_dnodeont_end - A function that adds a new node at the end 
* of a dlistint_t list
*
* @head: Header of the double linked list
* @n: Data for the new node
*
* Return: The adress of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head; 
	
	new_node = malloc(sizeof(dlistint_t));
	
	if (!head)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
