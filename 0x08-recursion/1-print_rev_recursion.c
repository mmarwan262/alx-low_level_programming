#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: when the end of the string is reached, return */
return;
}

/* Recursively call the function with the next character */
_print_rev_recursion(s + 1);

/* After the recursive call, print the current character */
_putchar(*s);
}
