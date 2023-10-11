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
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
    
char lowercaseHex = 'a';
while (lowercaseHex <= 'f')
{
putchar(lowercaseHex);
lowercaseHex++;
}
    
putchar('\n');

return (0);
}
