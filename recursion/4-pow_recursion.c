#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _pow_recursion - function
 * @y: if lowert than 0 return -1
 *
 * Description: write a function that return value of x when y is raised
 *
 * Return: 0 Always (Success)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}
