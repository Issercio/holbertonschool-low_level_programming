#include <stdio.h>

/**
 * main Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase
 * using only the putchar fonction
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
putchar ('\n')
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar (letter);
}
putchar ('\n')

return (0);
}
