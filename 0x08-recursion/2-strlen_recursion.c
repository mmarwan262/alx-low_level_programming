#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: when the end of the string is reached, return 0 */
return (0);
}
else
{
/* Recursively call with the next character and increment the count by 1 */
return (1 + _strlen_recursion(s + 1));
}
}
