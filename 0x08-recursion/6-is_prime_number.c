#include "main.h"
/**
 * is_divisible - checks if n is divisible by x
 * @n: number to check
 * @x: divisor
 *
 * Return: 1 if n is divisible by x else 0
 */
int is_divisible(int n, int x)
{
if (x == 1)
return (0);
if (n % x == 0)
return (1);
return (is_divisible(n, x - 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (!is_divisible(n, n - 1));
}

