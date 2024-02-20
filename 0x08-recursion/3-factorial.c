#include "main.h"
/**
 * factorial - Gets the factorial of a given number.
 * @n: Number whose factorial to calculate.
 *
 * Return: Factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
