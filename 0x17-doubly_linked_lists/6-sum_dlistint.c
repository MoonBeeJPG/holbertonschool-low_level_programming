#include "lists.h"
/**
* sum_dlistint - A function that returns the sum of all the
* data of a dlistint_t list
*
* @head: Header of the doubly linked list
*
* Return: The sum of all the data in the doubly linked list,
* or 0 if it empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

 	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
