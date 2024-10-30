#include "main.h"
#include <stdio.h>

/**
 *_strcat - Function
 * @src: the string to take from
 * @dest: return the result
 *
 * Description: write a function that concatenates two strings
 *
 * Return: pointer to the result string dest
 */
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*start != '\0')
{
start++;
}
while (*src != '\0')
{
*start = *src;
start++;
src++;
}
*start = '\0';
return (dest);
}
