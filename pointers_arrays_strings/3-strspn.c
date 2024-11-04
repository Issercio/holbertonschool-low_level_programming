#include "main.h"
#include <stdio.h>

/**
 * strspn - function
 * @s: number of bytes
 * @accept: bytes from s
 *
 * Description: write a function that gets length of a prefix
 *
 * Return: 0 Always (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *p;
for (; *s; s++)
{
found = 0;
for (p = accept; *p; p++)
{
if (*s == *p)
{
found = 1;
break;
}
}
if (found == 0)
return (count);
count++;
}
return (count);
}
