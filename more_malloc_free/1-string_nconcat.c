#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to include of s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int s3len;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;
	for (; s2[s2len] && s2len < n; s2len++)
		;
	s3len = s1len + s2len;

	s3 = malloc(sizeof(char) * s3len + 1);
	if (s3 == NULL)
		return ('\0');

	while (i < s1len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < s3len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
