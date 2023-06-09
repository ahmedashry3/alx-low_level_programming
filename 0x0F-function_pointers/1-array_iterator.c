#include "function_pointers.h"

/**
* array_iterator - Executes a function
* @array: ARRAY.
* @size: Array’s size.
* @action: Pointer to the function to be executed.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}
}
