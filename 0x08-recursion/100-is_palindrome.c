#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
* find_strlen - Returns the length of string.
* @s: Measure string.
*
* Return: Length of string.
*/
int find_strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += find_strlen(s + len);
}

return (len);
}

/**
* check_palindrome - Checks if string is palindrome.
* @s: Check string.
* @len: Length of s.
* @index: Check Index of string.
*
* Return: If string is palindrome - 1.
* If string is not palindrome - 0.
*/
int check_palindrome(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);

if (s[index] == s[len - index - 1])
return (check_palindrome(s, len, index + 1));

return (0);
}

/**
* is_palindrome - Checks if string is palindrome.
* @s: Check string.
*
* Return: If string is palindrome - 1.
* If string is not palindrome - 0.
*/
int is_palindrome(char *s)
{
int index = 0;
int len = find_strlen(s);

if (!(*s))
return (1);

return (check_palindrome(s, len, index));
}
