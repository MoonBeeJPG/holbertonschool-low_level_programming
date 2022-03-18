#include "lists.h"
/**
* list_len: adad
* @h: dewefa
* Return: fqwfewd
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
