#include "lists.h"
/**
 * find_listint_loop - finds the loop in linked list
 * @head: linked list to search for
 *
 * Return: address of node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *steady = head;
listint_t *fast = head;
if (!head)
return (NULL);
while (steady && fast && fast->next)
{
fast = fast->next->next;
steady = steady->next;
if (fast == steady)
{
steady = head;
while (steady != fast)
{
steady = steady->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
