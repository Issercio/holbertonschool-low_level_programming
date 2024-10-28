#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with Fizz-Buzz substitutions
 *
 * Description: print number 1 to 100, replacing multiples of 3 with 
 * "Fizz", multiplies of 5 with "Buzz", and multiplies of both with "FizzBuzz".
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
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
