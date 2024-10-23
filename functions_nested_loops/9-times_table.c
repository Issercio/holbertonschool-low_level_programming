#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 table
 *
 * Description: Prints the 9 table starting with 0
 *
 *
 */
void times_tables(void)
int main(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j == 0)
{
_putchar('0');
}
else if (result <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar('.');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
}
_putchar('\n');
}
}
