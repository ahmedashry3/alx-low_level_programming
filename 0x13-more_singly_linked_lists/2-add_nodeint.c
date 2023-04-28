#include "lists.h"

/**
* add_nodeint - Adds new node at beginning of listint_t.
* @head: Pointer to address of listint_t head.
* @n: Integer for new node.
*
* Return: If function fails - NULL.
* Otherwise - Address of new element.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;

return (new);
}
