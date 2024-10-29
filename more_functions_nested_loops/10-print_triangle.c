#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Function.
 * @size: size of the triangle
 *
 * Description: write a function that prints a triangle, followed by a new line
 *
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}