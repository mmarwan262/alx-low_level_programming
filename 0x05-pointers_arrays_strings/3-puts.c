#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to be printed
*/

void _puts(char *str)
{
while (*str)
{
write(1, str, 1);  // Write each character to stdout
str++;
}
write(1, "\n", 1);  // Write a newline character to stdout
}

