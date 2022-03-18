#include "lists.h"
/**
*
*
*
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *str1, *next_node;

	if (!str)
		return (NULL);

	str1 = malloc(sizeof(list_t));

	if (!str1)
		return (NULL);
	
	str1->str = strdup(str);
	str1->len = strlen(str);
	str1->next = NULL;

	if (*head != NULL)
	{
		next_node = *head;
		while (next_node->next)
			next_node = next_node->next;
		next_node->next = str1;
	}
	else
		*head = str1;
	return (str1);
}

