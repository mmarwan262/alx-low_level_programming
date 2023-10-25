#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0); /* 0 and 1 are not prime numbers */
}
return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Helper function to recursively check for primality.
 * @n: The number to check.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_recursive(int n, int divisor)
{
if (divisor == n)
{
return (1); /* n is only divisible by itself, so it's prime */
}
if (n % divisor == 0)
{
return (0); /* n is divisible by a number other than 1 and itself */
}
return (is_prime_recursive(n, divisor + 1));
}
