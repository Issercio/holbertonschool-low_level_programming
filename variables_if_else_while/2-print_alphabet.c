#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 * using only the putchar fonction
 *
 * Return always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
putchar ('\n');

return (0);
}
