#include <stdio.h>
#include "main.h"
/**
 * _memset - Function fills the first n bytes of the memory area pointed to by s with the constant byte c.
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
