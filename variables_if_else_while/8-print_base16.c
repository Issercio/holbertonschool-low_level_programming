#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers base 16 in lowercase
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbers;
char letter;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar (numbers);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar (letter);
}
putchar ('\n');

return (0);
}
