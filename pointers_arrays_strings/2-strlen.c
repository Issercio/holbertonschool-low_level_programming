#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function
 * @s: the string to measure
 *
 * Description: write a function that return the length of a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
