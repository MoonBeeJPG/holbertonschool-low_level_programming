#include "lists.h"
/**
* dlistint_len - A function that returns the number of elements in a
* dlistint_t list
*
* @h: Head of the double linked list
*
* Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
