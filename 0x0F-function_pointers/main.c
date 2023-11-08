#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point, calculator program.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return: 0 for success, or an error code if an error occurs.
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

func = get_op_func(argv[2]);

if (!func)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", func(num1, num2));

return (0);
}
