#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Function that prints a string in reverse.
 * @s: array with the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
