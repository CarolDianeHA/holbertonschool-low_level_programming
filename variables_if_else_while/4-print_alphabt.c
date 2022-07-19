#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet in lowercase,
 * except e and q.
 * Return: 0
 */
int main(void)

{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar (x);
		}
		x++;
	}
		putchar ('\n');
	return (0);
}
