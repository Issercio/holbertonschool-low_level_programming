#include "main.h"
#include <stdio.h>

/**
 * print_array - Function
 * @a: the array of intergers
 * @n: the number of elements to print
 *
 * Description: write a function that print n elements of an array
 *
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; < n; i++)
{
if (i > 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(a[i]);
}
_putchar('\n');
}
