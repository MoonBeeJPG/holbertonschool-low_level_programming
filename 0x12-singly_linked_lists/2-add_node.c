#include "lists.h"
/**
* add_node - Add a new node to the list_t
* @head: header
* @str: string
* Return: Return the adress of the copy of str
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *str1;

	if (!str)
		return (NULL);
	str1 = malloc(sizeof(list_t));

	if (!str1)
		return (NULL);
	else
	{
		str1->str = strdup(str);
		str1->len = strlen(str);
		str1->next = *head;
		*head = str1;
	}
	return(str1);
}
