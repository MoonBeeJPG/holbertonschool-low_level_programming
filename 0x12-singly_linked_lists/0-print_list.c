#include "lists.h"
/**
* print_list - function that print all the elements of the list_t
* @h: header of the nodes
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		
		h = h->next;
		count++;
	}
	return (count);
}
