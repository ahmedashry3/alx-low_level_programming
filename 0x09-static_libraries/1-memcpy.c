#include "main.h"

/**
* _memcpy - Copies @n bytes from the memory area pointed
* @dest: A pointer to the memory area to copy @src into.
* @src: source buffer to copy characters from.
* @n: number of bytes to copy from @src.
*
* Return:  pointer to the destination buffer @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
