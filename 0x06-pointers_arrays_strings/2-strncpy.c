/**
 * _strncpy - Copies a string from src to dest, with a maximum of n characters.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string (dest).
 */

char *_strncpy(char *dest, const char *src, int n)
{
int i;

/* Copy characters from src to dest, limiting to n characters */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Fill the remaining characters in dest with null terminators */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
