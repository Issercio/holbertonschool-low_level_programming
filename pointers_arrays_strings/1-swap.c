#include "main.h"
#include <stdio.h>

/**
 * swap_int - Functions.
 *
 * Description: write a function that swaps the value of two integers
 *
 */
void swap_int(int *a, int *b)
{
int *a = 45, *b = 80, temp;
temp = a;
a = b;
b = temp;
printf("a = %d, b = %d\n", a, b);
return (0);
}
