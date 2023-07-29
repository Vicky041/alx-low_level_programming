#include <stdio.h>
#include "lists.h"
<<<<<<< HEAD

/**
 * print_list -Prints  elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t e = 0;
=======
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print 
 *
 * Return: the number of the nodes printed
 */
size_t print_list(const list_t *h)
{
size_t s = 0;
>>>>>>> b09e15da0210f917c6ca13c6c2be835174ac6ebc
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
<<<<<<< HEAD
e++;
}
return (e);
=======
s++;
}
return (s);
>>>>>>> b09e15da0210f917c6ca13c6c2be835174ac6ebc
}
