#include "main.h"
#include <stdio.h>

/**
 * _puts - Function
 *
 * Description: write a function that prits a string
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
