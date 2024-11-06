#include "main.h"
#include <stdio.h>

/**
 * _strspn - function
 * @s: the string to be scanned
 *
 * Description : write a function that print a chessboard
 *
 * Return: 0 Always (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int isAccepted;
char *a;
while (*s)
{
isAccepted = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
isAccepted = 1;
break;
}
}
if (isAccepted == 0)
break;
count++;
s++;
}
return (count);
}
