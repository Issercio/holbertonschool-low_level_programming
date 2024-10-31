#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function
 * @str: the string to capitalizes from
 *
 * Description: write a function that capitalizes all word of a string
 *
 */
char *cap_string(char *str)
{
int index = 0;
if (str[index] >= 'a' && str[index] <= 'z')
str -= 32;
while (str[index])
{
if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
str[index] == ',' || str[index] == ';' || str[index] == '.' ||
str[index] == '!' || str[index] == '?' || str[index] == '"' ||
str[index] == '(' || str[index] == ')' || str[index] == '{' ||
str[index] == '}')
{
if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
{
str[index + 1] -= 32;
}
}
index++;
}
return (str);
}
