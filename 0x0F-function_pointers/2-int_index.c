#include "function_pointers.h"

/**
* int_index - Search for integer in array of integers.
* @array: ARRAY of integers.
* @size: Array's size.
* @cmp: Pointer to function to be used to compare values.
*
* Return: If no element matches or size <= 0 - -1.
* Otherwise - return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array == NULL || cmp == NULL)
return (-1);

for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);
}
