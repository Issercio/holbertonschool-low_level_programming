#include "main.h"
#include <stdio.h>

/**
 * _strncat - Function
 * @n: values of src
 * @src: the string to concatenates from
 * @dest: the return result
 *
 * Description: write a function that concatenates two string
 *
 * Return: the result of string dest
 */
char *_strncat(char *dest, char *src, int n)
{
  char *start = dest;
  while (*start != '\0')
    {
      start++;
    }
  while (*src != '\0')
    {
      *start = *src;
      start++;
    }
  *start = '\0';
  return (dest);
}
