#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * is_palindrome_recursive - Helper function to check
 * if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}

if (s[start] == s[end])
{
return (is_palindrome_recursive(s, start + 1, end - 1));
}

return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
*/
int main(void)
{
int r;

r = is_palindrome("level");
printf("%d\n", r);

r = is_palindrome("redder");
printf("%d\n", r);

r = is_palindrome("test");
printf("%d\n", r);

r = is_palindrome("step on no pets");
printf("%d\n", r);

return (0);
}
