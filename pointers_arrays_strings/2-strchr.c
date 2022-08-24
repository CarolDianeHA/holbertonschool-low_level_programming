#include <stdio.h>
#include "main.h"
/**
 * _strchr - Function that locates a character in a string.
 * @s: array
 * @c: character to locate
 * Return: \0
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; ; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
		if (!s[i])
			return ('\0');
	}
}
