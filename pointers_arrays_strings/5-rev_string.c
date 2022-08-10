#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - function
 * @s: variable with the string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
