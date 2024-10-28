#include <stdio.h>

/**
 * Fizz_Buzz - Print numbers from 1 to 100
 * but for the multiplies of 3 print Fizz,for the multiplies of 5 print Buzz
 *
 */
int main(void)
{
int i;
for (i = '1'; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
