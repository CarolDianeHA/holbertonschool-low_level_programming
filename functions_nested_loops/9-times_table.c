#include <stdio.h>
#include "main.h"
/**
 * times_table - times table
 *
 * Return: 0
 */
void times_table(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			int p = n1 * n2;

			if (n2 == 0)
			{
				_putchar('0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
