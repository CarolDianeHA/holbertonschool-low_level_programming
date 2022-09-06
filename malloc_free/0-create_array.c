#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 * @size: input size
 * @c: input char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return ('\0');

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
