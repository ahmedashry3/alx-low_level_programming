#include "lists.h"

/**
* add_nodeint_end - Adds new node to end of listint_t.
* @head: Pointer to address of head of listint_t.
* @n: Integer for new node to contain.
*
* Return: If function fails - NULL.
* Otherwise - Address of new element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (*head);
}
