#include "main.h"
#include <stdio.h>

/**
 * _puts - Function
 * @str: the string to be printed
 *
 * Description: write a function that prits a string
 *
 */
void _puts(char *str)
{
if (str == NULL)
return;
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
