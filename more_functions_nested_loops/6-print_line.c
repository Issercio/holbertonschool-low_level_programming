#include "main.h"
#include <stdio.h>

/**
 * print_line.c - Draw a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Description: Write a function that draw a straight line in the terminal
 *
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

