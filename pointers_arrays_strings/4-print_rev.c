#include "main.h"
#include <stdio.h>

/**
 * print_rev - Function
 * @s: the string to be printed in reverse
 *
 * Description: write a script that print a string in reverse
 *
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
{
_putchar('\n');
}
}
