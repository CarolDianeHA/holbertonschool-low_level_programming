#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Program that prints the alphabet.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar (x);
	}
	_putchar('\n');
}
