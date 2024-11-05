#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev - function
 *
 * Description: write a function that print a reverse string
 *
 * Return: 0 Always (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
write(1, s, 1);
}
