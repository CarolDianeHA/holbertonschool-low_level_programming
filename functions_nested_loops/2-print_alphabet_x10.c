#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char x;
	char t;

	for (t = 0; t < 10; t++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar (x);
		}
		_putchar ('\n');
	}
}
