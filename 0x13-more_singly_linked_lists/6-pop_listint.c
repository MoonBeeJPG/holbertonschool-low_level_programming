#include "lists.h"
/**
* pop_listint - Write a function that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
* @head: Header of the nodes
* Return: The head node's data (n)
*
* Auth: MoonBeeJPG
*/
int pop_listint(listint_t **head)
{
	listint_t *deletenode;
	int value;

	deletenode = *head;
	value = deletenode->n;
	
	if (*head == NULL)
		return (0);
	*head = deletenode->next;
	free(deletenode);

	return (value);
}
