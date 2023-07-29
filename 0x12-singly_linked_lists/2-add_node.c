#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - A  new node is added at the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: A  new string to add in the code
 *
 * Return: Adress of the new element, or NULL if not correct
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *vick;
unsigned int len = 0;
while (str[len])
len++;
vick = malloc(sizeof(list_t));
if (!vick)
return (NULL);
vick->str = strdup(str);
vick->len = len;
vick->next = (*head);
(*head) = vick;
return (*head);
}
