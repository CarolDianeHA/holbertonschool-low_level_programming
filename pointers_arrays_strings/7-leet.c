#include <stdio.h>
#include "main.h"
/**
 * leet - Function that encodes a string into 1337.
 * @s: variable with the string
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *x = "aAeEoOlLtT";
	char *y = "4433001177";

	while (s[i] != '\0')
	{
		while (x[j] != '\0')
		{
			if (s[i] == x[j])
				s[i] = y[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
