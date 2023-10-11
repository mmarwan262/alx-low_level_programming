#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers in base 10,
 * starting from 0, followed by a new line. It uses only two putchar calls.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');

return (0);
}
