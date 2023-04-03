#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: Search the string.
* @accept: The set of bytes to be searched for.
*
* Return: If a set is matched - a pointer to the matched byte.
*  NULL - If no set is matched.
*/
char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}

s++;
}

return ('\0');
}
