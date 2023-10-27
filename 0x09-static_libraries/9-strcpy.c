#include "main.h"

/**
 * _strcpy - copies a string to another string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
char *p = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
    
*dest = '\0';

return (p);
}
