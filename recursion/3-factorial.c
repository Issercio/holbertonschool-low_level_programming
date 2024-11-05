#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * factorial - function
 * @n:lower than 0 = -1
 *
 * Description: write a function that return a factorial
 *
 * Return: 0 Always (Success)
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}
