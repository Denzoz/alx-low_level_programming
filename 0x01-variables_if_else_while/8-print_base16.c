#include <stdio.h>
/**
 * main - Entry point of the program
 * This function prints  all the numbers of base 16 in lowercase lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char number = '0';
while (number <= '9')
{
putchar(number);
++number;
}
number = 'a';
while (number  <= 'f')
{
putchar(number);
++number;
}
putchar('\n');
return (0);
}
