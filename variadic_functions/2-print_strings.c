#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *aux;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		aux = va_arg(valist, char*);
		if (aux == NULL)
			printf("(nil)");

		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", aux, separator);
			else
				printf("%s", aux);
		}

	}
	va_end(valist);
	printf("\n");
}
