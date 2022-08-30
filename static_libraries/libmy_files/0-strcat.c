#include <stdio.h>
#include "main.h"
/**
 * _strcat - Function to concatenate strings
 * @dest: string 1
 * @src: string 2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
