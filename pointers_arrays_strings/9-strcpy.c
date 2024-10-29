#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function
 * @src: the string to copy from
 *
 * Description: Write a function that copies the string
 *
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
