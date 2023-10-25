#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is negative (error).
*/
int factorial(int n)
{
if (n < 0)
{
/* If n is negative, return -1 to indicate an error */
return (-1);
}
else if (n == 0 || n == 1)
{
/* Base case: factorial of 0 and 1 is 1 */
return (1);
}
else
{
/* Recursively calculate the factorial */
return (n * factorial(n - 1));
}
}
