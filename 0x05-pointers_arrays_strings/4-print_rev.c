#include "main.h"
/**
 *  print_rev - a function that prints a string in reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
while (length > 0)
{
s--;
_putchar(*s);
length--;
}
_putchar('\n');
}
