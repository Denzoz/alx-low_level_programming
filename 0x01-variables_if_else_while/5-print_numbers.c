#include <stdio.h>
/**
 * main - Entry point of the program
 * This function prints numbers 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
while (number <= 9)
{
printf("%d", number);
++number;
}
printf("\n");
return (0);
}
