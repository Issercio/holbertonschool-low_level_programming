#include "main.h"
#include <stdio.h>

/**
 * puts2 - Function
 * @str: the string to print from
 *
 * Description: write a function that print all character of a string
 *
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
