#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int roger;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (roger = 0; roger < size; roger++)
{
if (cmp(array[roger]) != 0)
return (roger);
}
return (-1);
}
