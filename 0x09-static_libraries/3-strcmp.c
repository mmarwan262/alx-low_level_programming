/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 *   - An integer less than 0 if s1 is less than s2.
 *   - 0 if s1 is equal to s2.
 *   - An integer greater than 0 if s1 is greater than s2.
 */

int _strcmp(const char *s1, const char *s2)
{
int i;

/* Iterate through both strings, comparing characters */
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}

/* Handle the case when one string is a prefix of the other */
if (s1[i] != '\0')
{
return (s1[i]);
}
else if (s2[i] != '\0')
{
return (-s2[i]);
}

/* Both strings are equal */
return (0);
}
