#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the squares
 * Return: 0
 */

void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar (35);
		}
		_putchar ('\n');
	}
		if (size <= 0)
		{
			_putchar ('\n');
		}
}
