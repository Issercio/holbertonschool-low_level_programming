#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Imprime n'importe quel type d'argument spécifié
 * @format: Liste des types d'arguments passés à la fonction
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int roger = 0;
char *str, *sep = "";
va_start(args, format);
while (format && format[roger])
{
switch (format[roger])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
roger++;
continue;
}
sep = ", ";
roger++;
}
printf("\n");
va_end(args);
}
