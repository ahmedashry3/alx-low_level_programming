#include "lists.h"

/**
* get_nodeint_at_index - Locates a given node of listint_t .
* @head: Pointer to head of listint_t.
* @index: Index of node to locate - indices start at 0.
*
* Return: If node does not exist - NULL.
*  Otherwise - Located node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;

for (node = 0; node < index; node++)
	{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
