#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: variable that contains the array of integer
 * @size: size of the elements in the array
 * @cmp: pointer to the function that capare values
 * Return: -1 or the first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int (*p)(int);

p = cmp;

if (size <= 0)
return (-1);
if (!array || !cmp)
return (-1);

for (i = 0; i < size; i++)
{
if (p(array[i]) && array[i] != 0)
break;
if (i == size - 1)
return (-1);
}
return (i);
}
