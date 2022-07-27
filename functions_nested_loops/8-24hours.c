#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the Bauer's day.
 *
 * Return:
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
}
