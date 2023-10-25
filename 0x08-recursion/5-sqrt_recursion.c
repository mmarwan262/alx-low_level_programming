#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
/* If n is negative, return -1 to indicate an error */
return (-1);
}
else if (n == 0 || n == 1)
{
/* Base case: square root of 0 and 1 is the number itself */
return (n);
}
else
{
return (_sqrt_helper(n, 1)); /* Call a helper function */
to calculate the square root
}
}

/**
 * _sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if the guess is too large.
 */
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (_sqrt_helper(n, guess + 1)); /* Increment the guess and continue */
}
}
