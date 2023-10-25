#include "main.h"

/**
 * square - find natural square root
 * @n: int
 * @val: square root
 *
 * Description: This function recursively searches for the natural square root
 * of the given number 'n' using a helper value 'val'.
 *
 * Return: int
 */
int square(int n, int val);

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 *
 * Description: This function calculates the natural square root of the given
 * number 'n' using recursion.
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find natural square root
 * @n: int
 * @val: square root
 *
 * Description: This function recursively searches for the natural square root
 * of the given number 'n' using a helper value 'val'.
 *
 * Return: int
 */

int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
