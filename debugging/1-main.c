#include <stdio.h>

/**
 * main - causes an infinite loop and avoided.
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 10;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
