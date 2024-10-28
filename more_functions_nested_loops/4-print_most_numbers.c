#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Check the function that print most of the numbers
 *
 * Description: Write a function that prints the numbers 0 to 9
 * and not print 2 and 4
 *
 * Return: the numbers print
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
_putchar(i + '0');
}
}
_putchar('\n');
}
