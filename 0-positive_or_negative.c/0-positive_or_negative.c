#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number is: %d\n", n);
if (n > 0)
{
printf("The number is positive.\n");
{
else if (n == 0)
{
printf("The number is zero.\n");
}
else
{
printf("The number is negative.\n");
}
return (0);
}