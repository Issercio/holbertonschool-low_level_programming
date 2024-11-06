#include "main.h"
#include <stdio.h>

/**
 * print_chess - function
 *
 * Description : write a function that print a chessboard
 *
 * Return: 0 Always (Success)
 */
void print_chessboard(char (*a)[8])
{
int roger, George;
for (roger = 0; roger < 8; roger++)
{
for (George = 0; George < 8; George++)
{
printf("%c", a[roger][George]);
if (George == 7)
printf("\n");
else
printf(" ");
}
}
}
