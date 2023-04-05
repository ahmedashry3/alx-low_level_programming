#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
* find_sqrt - Finds square root of input number.
* @num: Number to find the square root of.
* @root: Root to be tested.
*
* Return: If number has natural square root - the square root.
* If number does not have natural square root - -1.
*/
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - Returns square root of number.
* @n: Number to return the square root of.
*
* Return: If n has natural square root - Ntural square root of n.
* If n does not have natural square root - -1.
*/
int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, root));
}
