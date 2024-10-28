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
int n = 100;
printf("before: %d\n", n);
reset_to_98(&n);
printf("after: %d\n", n);
{
*n =98;
}
return 0;
}
