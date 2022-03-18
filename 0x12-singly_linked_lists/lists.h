#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* struct list- structure for the nodes
* @str: strings
* @len: lenght o the strings
* @next: next nodes
*/
typedef struct list
{
char *str;
unsigned int len;
struct list *next;
} list_t;

void snd_main(void) __attribute__((constructor));
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
