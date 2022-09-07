#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string given
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return ('\0');
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return ('\0');
	while (j < i)
	{
		dup[j] = str[j];
		j++;
	}
	return (dup);
	free(dup);
}
