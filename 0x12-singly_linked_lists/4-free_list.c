#include <stdlib.h>
#include "lists.h"

/**
 * free_list -This   frees  linked list
 * @head: list_t list is freed
 */
void free_list(list_t *head)
{
list_t *vick;
while (head)
{
vick = head->next;
free(head->str);
free(head);
head = vick;
}
}
