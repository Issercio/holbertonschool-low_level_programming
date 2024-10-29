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
int n;
while (str[length] != '\0')
{
length++;
}
n = (length + 1) / 2;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
