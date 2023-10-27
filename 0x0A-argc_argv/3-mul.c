#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}

int num1 = atoi(argv[1]); /* Convert the first argument to an integer */
int num2 = atoi(argv[2]); /* Convert the second argument to an integer */

int result = num1 * num2; /* Multiply the two numbers */

printf("%d\n", result); /* Print the result followed by a new line */

return (0);
}
