#include "main.h"
#include <stdio.h>

/**
 * _strstr - function
 * @needle: first occurrence of the substring
 * @haystack: the string to take from
 * @NULL: if bytes are not compared
 *
 * Description: Wrtie a function that locates a substring
 *
 * Return: 0 Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
