#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draw a diagonal on the terminal
 * @n: number of time the character \ should be printed
 *
 * Description: If n is 0 or less, the function should only print \n
 *
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
