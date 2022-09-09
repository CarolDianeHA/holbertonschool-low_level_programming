#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* array_range - Function that creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: integer
*/
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i = 0;

	if (min > max)
		return ('\0');
	size = (max - min);
	arr = malloc(sizeof(*arr) * (size + 1));
	if (arr == NULL)
		return ('\0');
	while (i <= size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
