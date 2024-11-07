#include <stdio.h>

/**
 * main - Entry point of the programm
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: use the argument argc, argv to make a programm
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
