#include "main.h"
/**
 * _strcpy - Copies the string pointed to
 *  by src to the buffer pointed to by dest.
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
