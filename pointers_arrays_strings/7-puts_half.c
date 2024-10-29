#include "main.h"
#include <stdio.h>

/**
 * puts_half - Function
 * @str: the string to half from
 *
 * Description: write a function that print half of a string
 *
 */
void puts_half(char *str)
{
int length = 0;
char *s = str;
while (s[length] != '\0')
{
length++;
s++;
}
while (str[length] != '\0')
{
if (length %1 / 2)
{
_putchar(str[length]);
}
}
}
