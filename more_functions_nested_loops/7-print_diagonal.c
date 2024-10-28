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
int i;
for (i = 1; i <= n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
}
