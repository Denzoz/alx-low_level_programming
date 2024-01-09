#include "main.h"
#include <ctype.h>
/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char *ptr = str;
char leetMap[26] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
while (*ptr)
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
*ptr = leetMap[tolower(*ptr) - 'a'];
}
ptr++;
}
return (str);
}
