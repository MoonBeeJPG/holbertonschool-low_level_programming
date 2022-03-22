#include "lists.h"
/**
* sum_listint - a function that returns the sum of all the data (n) of a
* listint_t linked list
* @head: Header of the nodes
* Return: 0 if the list is NULL
*
* Auth: MoonBeeJPG
*/
int sum_listint(listint_t *head)
{
	listint_t *current;
	int data = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		data = data + current->n;
		current = current->next;
	}
	return (data);
}
