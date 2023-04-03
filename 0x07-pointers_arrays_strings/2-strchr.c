#include "main.h"

/**
* _strchr - Locates character in string.
* @s: Search string.
* @c: Locate character.
*
* Return: If c is found - a pointer to the first occurrence.
* NULL – if c is not found.
*/
char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}

return ('\0');
}
