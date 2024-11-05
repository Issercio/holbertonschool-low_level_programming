#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen_recusrion - function
 *
 * Description: write a function that return a length of a string
 *
 * Return: 0 Always (Success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
