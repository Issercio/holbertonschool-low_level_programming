#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function
 * @s: the string to convert.
 *
 * Description: write a function that convert a string to an integer
 *
 * Return: The convered integer or 0 if no number are present
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int i = 0;
int found_number = 0;
while (s[i] == ' ')
{
i++;
}
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
found_number = 1;
i++;
}
return (found_number ? sign * num : 0);
}
