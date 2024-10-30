#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function
 * @s1: 1 string
 * @s2: 2 string
 *
 * Description: write a function that comapres two string
 *
 * Return: the return result
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *(unsigned char *)s1 - *(unsigned char *)s2;
}
