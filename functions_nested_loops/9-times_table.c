#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 table
 *
 * Description: Prints the 9 table starting with 0
 *
 *
 */
void times_table(void)
{
int row, column, product;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if (column == 0)
{
_putchar('0');
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
