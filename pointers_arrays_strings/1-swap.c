#include "main.h"
#include <stdio.h>

/**
 * swap_int - Functions.
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Description: write a function that swaps the value of two integers
 *
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
