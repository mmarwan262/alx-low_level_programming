#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: The string to search in
 * @accept: The set of bytes to search for
 *
 * Return: If a set of bytes is found, a pointer to the byte in s.
 *If no set of bytes is found, NULL.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
return (s);
a++;
}

s++;
}

return (NULL);
}
