/**
 * leet - Encodes a string into "1337" based on character replacements.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
char leet_chars[] = "aAeEoOtTlL";
char leet_replacements[] = "44337711";

int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; leet_chars[j]; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replacements[j];
break;
}
}
}

return (str);
}
