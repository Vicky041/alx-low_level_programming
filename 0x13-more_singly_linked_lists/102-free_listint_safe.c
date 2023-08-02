#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node in linked list
 *
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
size_t n = 0;
int diff;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
n++;
}
else
{
free(*h);
*h = NULL;
n++;
break;
}
}
*h = NULL;
return (n);
}
