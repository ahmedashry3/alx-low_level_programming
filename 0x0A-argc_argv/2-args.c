#include <stdio.h>

/**
* main - Prints all received arguments.
* @argc: Number of arguments supplied to program.
* @argv: Array of pointers to arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);

return (0);
}
