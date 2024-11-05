#include "main.h"
#include <stdio.h>

/**
 * strchr - function
 * @c: the first occurence
 * @s: the string
 * @null: if the character is not found
 *
 * Description: write a function that locate a character in a string
 *
 * Return: 0 Always (Succes)
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);    
return (NULL);
}
