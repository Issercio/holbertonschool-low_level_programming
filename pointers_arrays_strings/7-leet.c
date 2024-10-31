#include "main.h"
#include <stdio.h>

/**
 * leet - Function
 * @str: the string to be encoded
 *
 * Description: write a function that encodes a string into 1337
 *
 * Return: 0 Always (Success)
 */
char *leet(char *str)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_letters[j] != '\0'; j++)
{
if (str[i] == leet_letters[j])
{
str[i] = leet_numbers[j];
break;
}
}
}
return (str);
}
