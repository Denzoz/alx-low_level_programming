#include <stdio.h>
/**
 * main - Entry point of the program
 * This function prints the alphabet lowercase in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'z';
while (lowercase >= 'a')
{
putchar(lowercase);
--lowercase;
}
putchar('\n');
return (0);
}
