#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * @s: bytes in the string
 * @accept: accept if the bytes match
 * @NULL: if no bytes is found
 *
 * Description: write a function that searches string of any bytes
 *
 * Return: 0 Always (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int roger, George;
for (roger = 0; s[roger] != '\0'; roger++)
{
for (George = 0; accept[George] != '\0'; George++)
{
if (s[roger] == accept[George])
{
return (&s[roger]);
}
}
}
return (NULL);
}
