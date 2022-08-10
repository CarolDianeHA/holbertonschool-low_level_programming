#include <stdio.h>
#include "main.h"
/**
 * puts_half - function that prints half of the string
 * @str: variable with the string
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	x = i / 2;
	if (i % 2 == 1)
		x++;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
