#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers
 * base 10 starting from 0 without using char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar (numbers);
}
{
putchar ('\n');
}

return (0);
}
