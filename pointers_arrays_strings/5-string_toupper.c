#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function
 * @str: the string to modified from
 *
 * Description: write a function that changes all lowercase letter of a string
 * to uppercase
 *
 */
char *string_toupper(char *)
{
char *str = *;
int roger = 0;
while (str[roger] != '\0')
{
if (str[roger] >= 'a' && str[roger] <= 'z')
{
str[roger] = str[roger] - 32;
}
roger++;
}
return (str);
}
