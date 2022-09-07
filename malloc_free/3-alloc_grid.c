#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input row
 * @height: input column
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return ('\0');

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return ('\0');

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		arr[hgt_index] = malloc(sizeof(int) * width);

		if (arr[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(arr[hgt_index]);

			free(arr);
			return ('\0');
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			arr[hgt_index][wid_index] = 0;
	}

	return (arr);
}
