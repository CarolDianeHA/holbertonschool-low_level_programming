#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints the string
 * @str: variable with the string
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
