#include <stdio.h>
#include "main.h"
/**
 * _strlen - similar function strlen.
 * @s: variable to strlen
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++);
	return (i);
}
