#include <stdio.h>

/**
 * main - Entry point of the programm
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments strings
 *
 * Description: use the argument argc, rgv to make a programm
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
