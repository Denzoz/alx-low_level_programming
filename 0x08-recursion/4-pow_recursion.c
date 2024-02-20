#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power of y.
 * @x: the base number
 * @y: number of times is being mltiplied
 *
 * Return: the result of x to the power of y.
 *         If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (x * _pow_recursion(x, y - 1));
}
