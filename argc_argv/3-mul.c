#include <stdio.h>
#include <stdlib.h>

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
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
