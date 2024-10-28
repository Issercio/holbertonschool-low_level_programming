#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - int as parameter and updates the it points to to 98
 * @n: pointer to an interger to be updated
 *
 * Description: write a function that takes a pointer an int to update
 * to 98
 *
 */
void reset_to_98(int *n);
{
*n = 98;
}
int main(void)
{
int n = 100;
printf("Before: %d\n", n);
reset_to_98(&n);
printf("After: %d\n", n);
return 0;
}
