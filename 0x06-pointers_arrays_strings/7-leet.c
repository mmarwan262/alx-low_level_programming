#include "main.h"

/**
 * leet - Encodes a string into "1337" based on character replacements.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
char *cp = str;
char key[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
int value[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};
unsigned int i;

while (*str)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*str == key[i])
{
*str = value[i] + '0';
break;
}
}
str++;
}

return (cp);
}
