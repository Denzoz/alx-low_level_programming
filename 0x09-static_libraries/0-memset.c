#include "main.h"
/**
 *_memset - fills the first n bytes of the memory pointed to by s
 *           with the constant byte b
 * @s: pointer to the memory to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the filled memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
int y;
for (y = 0; y < n; y++)
s[y] = b;
return (s);
}
