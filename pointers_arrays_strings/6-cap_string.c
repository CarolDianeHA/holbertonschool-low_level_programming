#include <stdio.h>
#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @s: variable with the string
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == '\t' || s[i] == '\n'
				|| s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '"'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	return (s);
}
