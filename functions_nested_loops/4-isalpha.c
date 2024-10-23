#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Check the function for alphabetic character
 * @c: The character to be checked
 *
 * Description: Write a function that check alphabetic character
 *
 * Return: 1 if c is character, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
