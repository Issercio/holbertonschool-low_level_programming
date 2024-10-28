#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a numbers
 * @n: the numbers that be checked for extract the last digit from
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}