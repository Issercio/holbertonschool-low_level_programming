#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function
 * @src: the string to copy from
 * @dest: the destination buffer where the string will be copied
 * @n: the number of bytes
 * Description: write a function that copies a string
 *
 * Return: the result of string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
