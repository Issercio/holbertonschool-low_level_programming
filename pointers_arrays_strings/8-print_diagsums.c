#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 *
 *
 * Description: write a function that print the sum of two diagonals
 *
 *
 * Return: 0 Always (Success)
 */
void print_diagsums(int *a, int size)
{
int roger;
long int sum1 = 0, sum2 = 0;
for (roger = 0; roger < size; roger++)
{
sum1 += a[roger * size + roger];
sum2 += a[roger * size + (size - 1 - roger)];
}
printf("%ld, %ld\n", sum1, sum2);
}
