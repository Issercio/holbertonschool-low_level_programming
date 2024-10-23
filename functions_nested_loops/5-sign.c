#include "main.h"
#include <stdio.h>

/**
 * _print_sign - Check the function that print the sign of a numbers
 * @n: The character to be checked
 *
 * Description: prints the sign of a numbers
 *
 * Return: 1 and prints + if n is grezter than zero
 * 0 and prints 0 if n is zero
 * -1 prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-')
return (-1);
}
}
