#include "lists.h"
/**
* add_nodeint - a function that adds a new
* node at the beginning of a listint_t list
* @head: Header of the nodes
* @n: New node
* Return: The adress of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n1;

	n1 = malloc(sizeof(listint_t));

	if (!n1)
		return (NULL);

	n1->n = n;
	n1->next = *head;
	*head = n1;

	return (n1);
}
