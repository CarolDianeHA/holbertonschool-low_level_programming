#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Function that reverse an array
 * @a: array
 * @n: bytes
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;
	int temp[1000];

	x = 0;
	while (x < n)
	{
		temp[x] = a[x];
		x++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = temp[x - 1];
		x--;
		i++;
	}
}
