#include "main.h"

/**
* _strstr - Locates substring.
* @haystack: Search the string.
* @needle: Locate the substring.
*
* Return: If the substring is located - a pointer to the beginning
* NULL - If the substring is not located.
*/

char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == 0)
return (haystack);

while (*haystack)
{
index = 0;

if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);

index++;

} while (haystack[index] == needle[index]);
}

haystack++;
}

return ('\0');
}
