#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line. It uses only three putchar calls and does not have
 * trailing whitespace.
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

num = 'a';
while (num <= 'f')
{
putchar(num);
num++;
}

putchar('\n');
return (0);
}
