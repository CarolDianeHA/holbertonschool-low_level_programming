#include <stdio.h>
#include "main.h"
/**
 * _strncat - Function to concatenate strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
