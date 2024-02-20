#include "main.h"
/**
 * sqrt_check - checks for square root
 * @n: number
 * @i: the guess for the square root
 *
 * Return: square root of n, or -1 if n doesnt have
 */
int sqrt_check(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_check(n, i + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 *
 * Return: square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_check(n, 0));
}

