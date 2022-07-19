#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet in lower & uppercase.
 * Return: 0
 */
int main(void)

{
	char x;

	for (x = 'a'; x <= 'z'; x++)
			putchar (x);
	for (x = 'A'; x <= 'Z'; x++)
			putchar (x);
		putchar ('\n');
	return (0);
}
