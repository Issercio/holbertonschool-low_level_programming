#include <stdio.h>

/**
 * main - Entry point of the programm
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments strings
 *
 * Description: use the argument argc, argv to make a programm
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
int roger;
for (roger = 0; roger < argc; roger++)
{
printf("%s\n", argv[1]);
}
return (0);
}
