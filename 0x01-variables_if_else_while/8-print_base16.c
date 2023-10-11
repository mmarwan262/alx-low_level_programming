#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line. It uses only three putchar calls.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char digit, lowercaseHex;
    
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
    
for (lowercaseHex = 'a'; lowercaseHex <= 'f'; lowercaseHex++)
{
putchar(lowercaseHex);
}
    
putchar('\n');

return (0);
}
