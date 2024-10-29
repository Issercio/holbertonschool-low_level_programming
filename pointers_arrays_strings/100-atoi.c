#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Description: Converts a string to an integer, taking into account
 *              leading whitespace and signs. Returns 0 if no numbers
 *              are found.
 *
 * Return: The converted integer or 0 if no numbers are present.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int i = 0;
int found_number = 0;
printf("Input string: '%s'\n", s);
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
printf("Final result: %d\n", found_number ? sign * num : 0);
return (found_number ? sign *num : 0);
}
