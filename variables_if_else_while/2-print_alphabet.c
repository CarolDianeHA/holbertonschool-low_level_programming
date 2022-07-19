#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet in lowercase.
 * Return: 0
 */
int main(void)

{
	int x = 'a';

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}
		putchar ('\n');
	return (0);
}
