#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints single-digiti numbers separate by,.
 * Return: 0
 */
int main(void)
{
	int y = 0;

	for (; y < 10; y++)
	{
		putchar ('0' + y);
		if (y != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
		putchar ('\n');
		return (0);
}
