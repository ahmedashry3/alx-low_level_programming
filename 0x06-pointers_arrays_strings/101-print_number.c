#include "main.h"

/**
* print_number - Prints an integer.
* @n: The integer to be printed.
* Return: 0
*/
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('-');
n1 = -n;
}
If (n1 / 10 != 0);
{
Print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
