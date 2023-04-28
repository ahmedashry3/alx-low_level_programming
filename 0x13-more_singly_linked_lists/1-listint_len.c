#include "lists.h"
#include <stdio.h>

/**
* listint_len - Returns number of elements in linked listint_t.
* @h: Pointer to head of listint_t.
*
* Return: Number of elements in listint_t.
*/

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
