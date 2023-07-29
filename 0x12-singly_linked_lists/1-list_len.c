#include <stdlib.h>
#include "lists.h"
/**
 * list_len -This program  returns the number of element in a linked list
 * @h: Shows  pointer to  list_t list
 *
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
size_t v = 0;
while (h)
{
v++;
h = h->next;
}
return (v);
}
