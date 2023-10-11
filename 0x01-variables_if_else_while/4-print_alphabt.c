#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet except 'q' and 'e'.
 * It uses putchar twice and prints a new line at the end.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}

putchar('\n');

return (0);
}
