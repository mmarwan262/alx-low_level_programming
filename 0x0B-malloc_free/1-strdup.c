#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
char *dup;
unsigned int len = 0;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(len + 1);

if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}
