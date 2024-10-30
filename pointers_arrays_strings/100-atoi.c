#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Description: Converts a string to an integer,
 *
 * Return: The converted integer or 0 if no numbers are present.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit_found = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
digit_found = 1;
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
return (sign == 1) ? INT_MAX : INT_MIN;
result = result * 10 + (*s - '0');
}
else if (digit_found)
break;
s++;
}
return result * sign;
}
