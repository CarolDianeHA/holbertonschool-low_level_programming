#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	for (x = 0; x < n; x++)
	{
		if (n > 1)
		{
			for (y = 0; y < x; y++)
			{
				_putchar (32);
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
	if (n <= 0)
	{
		_putchar ('\n');
	}
}
