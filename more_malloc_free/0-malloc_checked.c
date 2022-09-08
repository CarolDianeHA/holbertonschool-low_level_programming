#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: size of integer
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
