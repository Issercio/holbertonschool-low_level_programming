#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet 10 times
 *
 * Description: This function prints all lowercase letters
 * of the English alphabet from 'a' to 'z', ten times
 * Each set of the alphabet is followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
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
