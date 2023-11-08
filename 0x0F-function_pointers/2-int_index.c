#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which cmp does not return 0,
 * or -1 if no element matches or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp && size > 0)
{
int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}

return (-1);
}
