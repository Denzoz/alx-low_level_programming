#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: ....
 */
void times_table(void)
{
int col, row, result;
for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
result = row * col;
if (col > 0)
{
_putchar(',');
_putchar(' ');
}
if (result <= 9)
_putchar(' ');
else
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
_putchar('\n');
}
}
