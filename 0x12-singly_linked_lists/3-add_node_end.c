#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A new node added at the end of a linked list
 * @head:A double pointer to the list_t list
 * @str: String to put in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *vick = *head;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (vick->next)
vick = vick->next;
vick->next = new;
return (new);
}
