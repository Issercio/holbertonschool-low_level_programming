#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strchr - function
 * @c: the character to find
 * @s: the string to search
 *
 * Description: write a function that locate a character in a string
 *
 * Return: a pointer to the first occurence of the character c in the string s,
 * or NULL if the character is not found
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
