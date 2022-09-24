#include <stdio.h>
/**
 * array_iterator - Function that executes a function given 
 * as a parameter on each element of an array
 * @array: variable with the array
 * @size: the array size
 * @action: pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i = 0;
    void (*p)(int);

    p = action;

    if (!array || !action)
    return;

    for (i = 0; i < size; i++)
    {
        p(array[i]);
    }
    
}