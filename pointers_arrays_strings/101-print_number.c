#include <stdio.h>
#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: variable with the integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if ((num / 10) != 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
