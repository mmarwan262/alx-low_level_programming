#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet letters
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');

return (0);
}
