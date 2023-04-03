#include "main.h"

/**
* _memset - Fills block of memory with a value
* @s: Starting address of memory to be filled.
* @b: Desired value.
* @n: The number of bytes to be filled.
*
* Return: changed array.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
