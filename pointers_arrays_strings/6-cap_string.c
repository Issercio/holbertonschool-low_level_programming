#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function
 * @str: the string to capitalizes from
 *
 * Description: write a function that capitalizes all word of a string
 *
 * Return: 0 Always (Success)
 */
char *cap_string(char *str)
{
int index = 0;
int capitalize_next = 1;
while (str[index] != '\0')
{
if (capitalize_next && (str[index] >= 'a' && str[index] <= 'z'))
{
str[index] -= 32;
capitalize_next = 0;
}
else if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
str[index] == ',' || str[index] == ';' || str[index] == '.' ||
str[index] == '!' || str[index] == '?' || str[index] == '"' ||
str[index] == '(' || str[index] == ')' || str[index] == '{' ||
str[index] == '}')
{
capitalize_next = 1;
}
else
{
capitalize_next = 0;
}
index++;
}
return (str);
}
