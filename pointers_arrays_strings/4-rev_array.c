#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function
 * @n: the number of array
 * @a: pointer of the array to be reversed
 *
 * Description: write a function that reverse the content of an array
 *
 */
void reverse_array(int *a, int n)
{
int temp, roger;
for (roger = 0; roger < n / 2; roger++)
{
temp = a[roger];
a[roger] = a[n - 1 - roger];
a[n - 1 - roger] = temp;
}
}