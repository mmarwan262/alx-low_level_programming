/**
 * leet - Encodes a string into "1337" based on character replacements.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
char leet_map[] = "44337711";
char *leet_chars = "aAeEoOtTlL";
int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; leet_chars[j]; j++)
{
if (str[i] == leet_chars[j])
{
/* Replace the character with the corresponding 1337 character */
str[i] = leet_map[j];
break;
}
}
}

return (str);
}
