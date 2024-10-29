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
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf(",");
printf(" ");
}
printf("%d", a[i]);
}
printf("\n");
}
