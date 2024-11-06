#include "main.h"
#include <stdio.h>

/**
 * print_chess - function
 * @a: 2D array representing the chessboard
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
putchar(a[roger][George]);
}
putchar('\n');
}
}
