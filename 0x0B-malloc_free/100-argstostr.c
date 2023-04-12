#include "main.h"
#include <stdlib.h>
/**
* argstostr - Concatenates ALL arguments of the program into a string.
* @ac: Number of arguments passed to program.
* @av: Array of pointers to arguments.
* Return: If ac == 0, av == NULL or function fails - NULL.
* Otherwise - Pointer to new string.
*/
char *argstostr(int ac, char **av)
{
char *str;
int arg, byte, index, size = ac;
if (ac == 0 || av == NULL)
return (NULL);
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}
str = malloc(sizeof(char) * size + 1);
if (str == NULL)
return (NULL);
index = 0;
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
str[index++] = av[arg][byte];
str[index++] = '\n';
}
str[size] = '\0';
return (str);
}
