#include "lists.h"
/**
* add_dnodeint - A function that adds a new node at the beggining
* of a dlistint_t list
*
* @head: Head of the double linked list
* @n: Data for the new node
*
* Return: The adress of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);

	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
