#include "main.h"
#include <stdio.h>

/**
 * _islower - check for the lowercase
 * @c: the charcter to be checked
 *
 * Description: Check if the input character
 * is a lowercase letter (from 'a' to 'z').
 *
 * Return 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
