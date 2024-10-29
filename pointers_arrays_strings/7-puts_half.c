#include "main.h"
#include <stdio.h>

/**
 * puts_half - Function
 *
 * Description: write a function that print half of a string
 *
 */
void puts_half(char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
{
_putchar(str[length]);
}
length++;
_putchar('\n');
}
