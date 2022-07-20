#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet in lower & uppercase.
 * Return: 0
 */
int main(void)
{
	char x;
	int y = 0;

		for (; y < 10; y++)
			putchar ('0' + y);
		for (x = 'a'; x <= 'f'; x++)
			putchar (x);
		putchar ('\n');
	return (0);
}
