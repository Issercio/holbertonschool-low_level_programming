#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function
 * @n: bytes memory
 * @src: memory area
 * @dest: return of a pointer
 *
 * Description: write a function that copy memory area
 *
 * Return 0 Always (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int roger;
for (roger = 0; roger < n; roger++)
{
dest[roger] = src[roger];
}
return (dest);
}
