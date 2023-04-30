#include "lists.h"

/**
* sum_listint - Calculates sum of all data (n) of listint_t.
* @head: Pointer to listint_t HEAD.
*
* Return: If the list is empty - 0.
* Otherwise - Sum of all data.
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
