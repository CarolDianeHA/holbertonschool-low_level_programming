#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: memory area to copy
 * @src: source to copy
 * @n: number of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		dest[i] = src[j];
			i++;
			j++;
	}
	return (dest);
}
