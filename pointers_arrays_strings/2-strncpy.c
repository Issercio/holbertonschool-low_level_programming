#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function
 * @src: the string to copy from
 * @dest: the destination buffer where the string will be copied
 *
 * Description: write a function that copies a string
 *
 * Return: the result of string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
  char *start = dest;
  int roger = 0;
  while (*start != '\0')
    {
      start++;
    }
  while (*src != '\0' && roger < n) 
    {
    *dest = *src;
      dest++;
      src++;
    }
  *start = '\0';
  return (dest);
}
