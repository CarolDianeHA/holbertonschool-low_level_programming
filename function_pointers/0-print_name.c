#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: variable with the name
 * @f: the function to send the name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}