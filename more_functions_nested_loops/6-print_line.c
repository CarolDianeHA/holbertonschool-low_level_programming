#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times
 * Return: 0
 */

void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		if (n > 0)
		{
			_putchar (95);
			x += 1;
		}
		else
			_putchar ('\n');
	}
	_putchar ('\n');
}
