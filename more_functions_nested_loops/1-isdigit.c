#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check the function that check a digit
 *@c: the character to be checked
 *
 * Description: Write a function that check a digit
 *
 * Return: 1 if c is digit, otherwise is 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
