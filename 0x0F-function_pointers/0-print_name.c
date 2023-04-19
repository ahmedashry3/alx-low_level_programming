#include "function_pointers.h"

/**
* print_name - Prints Name.
* @name: Name to be printed.
* @f: Pointer to function that prints a Name.
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
