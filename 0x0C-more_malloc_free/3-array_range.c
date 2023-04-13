#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers ordered from min to max.
* @min: First value of array.
* @max: Last value of array.
*
* Return: If min > max or function fails - NULL.
* Otherwise - Pointer to newly created array.
*/

int *array_range(int min, int max)
{
int *array, index, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = min++;
return (array);
}
