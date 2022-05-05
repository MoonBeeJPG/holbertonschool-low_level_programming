#include "lists.h"
/**
* print_dlistint - A function that prints all elements of a dlistint_t list
*
* @h: Header of the double linked list
*
* Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
