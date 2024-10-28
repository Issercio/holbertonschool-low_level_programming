#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Check that function that print numbers
 *
 * Description: Write a function that print the numbers 0 to 9
 * follow by a new line
 *
 * Return: 0 Always (Success)
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
