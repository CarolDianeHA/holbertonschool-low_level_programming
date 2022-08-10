#include <stdio.h>
#include "main.h"
/**
 * print_array - function that prints the array
 * @a - variable with the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
