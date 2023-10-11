#include <stdio.h>

/**
 * main - Entry point
 *
 * Descirption: Print all alphabets in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
