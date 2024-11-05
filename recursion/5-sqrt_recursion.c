#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _sqrt_recursion - function
 * @n: if not a natural square return -1
 *
 * Description: write a function that return a natural square
 *
 * Return: 0 Always (Success)
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 1));
}
