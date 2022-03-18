#include "lists.h"
/**
*
*
*
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nxt_str, next_node;

	if (!str)
		return (NULL);
	nxt_str = malloc(sizeof(list_t));
	if (!nxt_str)
		return (NULL);
	nxt_str = nxt_str->str;
	nxt_str = nxtr_str->len;
	nxt_str->next = NULL;

	if (head != NULL)
		next_node = head;
		while (next_node->next)
			next_node = next_node->next;
		next_node = str1;
	*head = str1;
	return (str1);
}

