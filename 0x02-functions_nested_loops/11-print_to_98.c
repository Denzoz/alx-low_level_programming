#include "main.h"
/**
 * print_number - Prints a number.
 * @n: The number to be printed.
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number
 */
void print_number(int n)
{
if (n < 10 && n >= 0)
_putchar(n + '0');
else if (n < 0)
{
_putchar('-');
_putchar((-n) + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
print_number(i);
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
print_number(i);
if (i > 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
