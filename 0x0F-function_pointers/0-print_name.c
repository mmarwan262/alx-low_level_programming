#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The name to be printed
 * @f: The function pointer to specify the printing format
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
