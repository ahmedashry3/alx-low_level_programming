#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees list_t.
* @head: Pointer to list_t.
*/

void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
