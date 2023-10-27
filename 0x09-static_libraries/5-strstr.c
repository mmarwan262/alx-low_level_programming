#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: If needle is found, a pointer to the beginning of the
 *substring within the haystack. If needle is not found, NULL.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack) {
char *h = haystack;
char *n = needle;

while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}

if (!*n)
return (h);

haystack = h + 1;
}

return (NULL);
}
