#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the funtion
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;

va_start(valist, n);

for (i = 0; i < n; i++)
{
printf("%i", va_arg(valist, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
