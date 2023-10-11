#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers in base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0'); /* Convert int to character and print */
}

putchar('\n');

return (0);
}
