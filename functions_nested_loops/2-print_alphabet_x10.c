#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet x10 times in lowercase
 *
 * Description: Prints x10 the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void);
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
