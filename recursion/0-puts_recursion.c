#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts_recursion - function
 *
 * Description: write a function that prints a string
 *
 * Return: 0 Always (Success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
write(1, "\n", 1);
return;
}
write(1, s, 1);
_puts_recursion(s + 1);
}