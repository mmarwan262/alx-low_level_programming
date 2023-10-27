/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string to which src will be concatenated.
 * @src: The source string to concatenate to dest.
 * @n: The maximum number of bytes from src to concatenate.
 *
 * Return: A pointer to the resulting string (dest).
 */

char *_strncat(char *dest, const char *src, int n)
{
int dest_len = 0;
int i;

/* Find the end of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Concatenate src to dest, using at most n bytes */
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[dest_len + i] = src[i];
}

/* Ensure the resulting string is null-terminated */
dest[dest_len + i] = '\0';

return (dest);
}
