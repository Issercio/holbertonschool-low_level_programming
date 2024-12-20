#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int roger = 0;
while (ops[roger].op != NULL)
{
if (strcmp(s, ops[roger].op) == 0)
return (ops[roger].f);
roger++;
}
return (NULL);
}
