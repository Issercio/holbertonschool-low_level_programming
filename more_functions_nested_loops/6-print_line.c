#include "main.h"
#include <stdio.h>

/**
 * print_line - Draw a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Description: If n is 0 or less, the function should only print \n
 *
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
