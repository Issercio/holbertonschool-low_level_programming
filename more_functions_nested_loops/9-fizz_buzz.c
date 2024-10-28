#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with Fizz-Buzz substitutions
 *
 * Description: print number 1 to 100, replacing with Fizz-Buzz substitutions
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
