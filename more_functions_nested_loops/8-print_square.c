#include "main.h"
#include <stdio.h>

/**
 * print_square - Print a square, followed by a new line
 * @size: size of the square
 *
 * Description: write a function that print a square if the size is 0 or less
 * the function should print a new line
 *
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
