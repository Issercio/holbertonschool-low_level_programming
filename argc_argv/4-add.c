#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the programm
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Description: use the argument argc, argv to make a programm
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int roger, George;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (roger = 1; roger < argc; roger++)
{
for (George = 0; argv[roger][George] != '\0'; George++)
{
if (!isdigit(argv[roger][George]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[roger]);
}
printf("%d\n", sum);
return (0);
}
