#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";

for (int i = 0; separators[i]; i++)
{
if (c == separators[i])
{
return (true);
}
}
return (false);
}

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
bool capitalize_next = true;

for (int i = 0; str[i]; i++)
{
if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - ('a' - 'A');
}

capitalize_next = is_separator(str[i]);

if (!capitalize_next)
{
/* Continue capitalizing letters until the next separator is found */
while (str[i] && !is_separator(str[i]))
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
/* Convert uppercase letters to lowercase */
str[i] = str[i] + ('a' - 'A');
}
i++;
}
}
}

return (str);
}
