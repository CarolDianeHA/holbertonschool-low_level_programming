#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the last digit
 * _putchar - the last number
 * @i: is integer
 * Return: 0
 */
int print_last_digit(int i)
{
	int lastn = i % 10;

	if (i < 0)
		lastn = lastn * -1;
	_putchar(lastn + '0');
	return (lastn);

}
