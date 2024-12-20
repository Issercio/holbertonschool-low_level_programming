#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function
 * @src: the string to copy from
 * @dest: the destination buffer where the string will be copied
 *
 * Description: Write a function that copies the string
 *
 * Return: A pointer to the destination string dest.
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
