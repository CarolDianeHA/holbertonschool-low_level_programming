#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i: integer
 * Return: 0, 1, and 98
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
