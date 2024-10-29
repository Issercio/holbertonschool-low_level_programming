#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function
 * @s: the string to convert.
 *
 * Description: write a function that convert a string to an integer
 *
 * Return: 0 if no number
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int i = 0;
while (s[i] == ' ')
{
i++;
}
if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign = -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
return (sign *num);
}
