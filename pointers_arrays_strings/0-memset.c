#include "main.h"
#include <stdio.h>

/**
 * _memset - function
 * @n: the memory bytes
 * @s: the pointer
 * @b: the bytes
 *
 * Description: write a function that fills memory with a constant byte
 *
 * Return: 0 Always (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int roger;
for (roger = 0; roger < n; roger++)
{
s[roger] = b;
}
return (s);
}
